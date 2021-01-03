ifneq ($(findstring MINGW,$(shell uname)),)
  WINDOWS := 1
endif
ifneq ($(findstring MSYS,$(shell uname)),)
  WINDOWS := 1
endif
ifneq ($(findstring microsoft,$(shell uname -a)),)
  WINDOWS := 1
endif

#-------------------------------------------------------------------------------
# Files
#-------------------------------------------------------------------------------

# Used for elf2dol
TARGET_COL := wii

OBJ_DIR := obj

SRC_DIRS := src             \
            src/Core/p2     \
            src/Core/x      \
            src/Game

ASM_DIRS := asm             \
            asm/bink        \
            asm/CodeWarrior \
            asm/Core/p2     \
            asm/Core/x      \
            asm/dolphin     \
            asm/Game        \
            asm/ODEGdev     \
            asm/rwsdk

# Inputs
S_FILES := $(foreach dir,$(ASM_DIRS),$(wildcard $(dir)/*.s))
C_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
CPP_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.cpp))
LDSCRIPT := ldscript.lcf

# Outputs
DOL     := main.dol
ELF     := $(DOL:.dol=.elf)
MAP     := bfbb.map

include obj_files.mk

O_FILES := $(INIT_O_FILES) $(EXTAB_O_FILES) $(EXTABINDEX_O_FILES) $(TEXT_O_FILES) \
           $(CTORS_O_FILES) $(DTORS_O_FILES) $(RODATA_O_FILES) $(DATA_O_FILES)    \
           $(BSS_O_FILES) $(SDATA_O_FILES) $(SBSS_O_FILES) $(SDATA2_O_FILES) 	  \
		   $(SBSS2_O_FILES)

#-------------------------------------------------------------------------------
# Tools
#-------------------------------------------------------------------------------

# Programs
ifeq ($(WINDOWS),1)
  WINE :=
else
  WINE := wine
endif
AS      := $(DEVKITPPC)/bin/powerpc-eabi-as
OBJCOPY := $(DEVKITPPC)/bin/powerpc-eabi-objcopy
CC      := $(WINE) tools/mwcc_compiler/2.0/mwcceppc.exe
LD      := $(WINE) tools/mwcc_compiler/2.7/mwldeppc.exe
PPROC   := python3 tools/postprocess.py
GLBLASM := python3 tools/inlineasm/globalasm.py
ELF2DOL := tools/elf2dol
SHA1SUM := sha1sum
ASMDIFF := ./asmdiff.sh

# Options
INCLUDES := -ir src -ir include -Iinclude -Iinclude/dolphin -Iinclude/CodeWarrior -Iinclude/rwsdk

ASFLAGS := -mgekko -I include
LDFLAGS := -map $(MAP) -w off -maxerrors 1 -nostdlib
CFLAGS  := -g -DGAMECUBE -Cpp_exceptions off -proc gekko -fp hard -fp_contract on -O4,p -msgstyle gcc -maxerrors 1 \
           -pragma "check_header_flags off" -RTTI off -pragma "force_active on" \
           -str reuse,pool,readonly -char unsigned -enum int -use_lmw_stmw on -inline off -nostdinc -i- $(INCLUDES)
PPROCFLAGS := -fsymbol-fixup

# elf2dol needs to know these in order to calculate sbss correctly.
SDATA_PDHR := 9
SBSS_PDHR := 10

# Silences most build commands. Run make S= to show all commands being invoked.
S := @

#-------------------------------------------------------------------------------
# Recipes
#-------------------------------------------------------------------------------

default: all

all: $(DOL)

ALL_DIRS := $(OBJ_DIR) $(addprefix $(OBJ_DIR)/,$(SRC_DIRS) $(ASM_DIRS))

# Make sure build directory exists before compiling anything
DUMMY != mkdir -p $(ALL_DIRS)

.PHONY: tools
	
$(DOL): $(ELF) | tools
	@echo " ELF2DOL "$@
	$S$(ELF2DOL) $< $@ $(SDATA_PDHR) $(SBSS_PDHR) $(TARGET_COL)
	$S$(SHA1SUM) -c bfbb.sha1 || ( rm -f main.dump; $(ASMDIFF) )

clean:
	rm -f $(DOL) $(ELF) $(MAP) baserom.dump main.dump
	rm -rf .pragma obj
	$(MAKE) -C tools clean

tools:
	$(MAKE) -C tools

inspect:
ifeq ($(WINDOWS),1)
	$(CC) $(CFLAGS) -o inspect.s -S $(subst \,/,$(subst C:\,/c/,$(INSPECT)))
else
	$(CC) $(CFLAGS) -o inspect.s -S $(INSPECT)
endif
	python3 tools/inspect_postprocess.py inspect.s

$(ELF): $(O_FILES) $(LDSCRIPT)
	@echo " LINK    "$@
	$S$(LD) $(LDFLAGS) -o $@ -lcf $(LDSCRIPT) $(O_FILES) 1>&2
# The Metrowerks linker doesn't generate physical addresses in the ELF program headers. This fixes it somehow.
	$S$(OBJCOPY) $@ $@

$(OBJ_DIR)/%.o: %.s
	@echo " AS      "$<
	$S$(AS) $(ASFLAGS) -o $@ $<
	$S$(PPROC) $(PPROCFLAGS) $@

$(OBJ_DIR)/%.o: %.c
	@echo " CC      "$<
	$S$(CC) $(CFLAGS) -c -o $@ $< 1>&2

$(OBJ_DIR)/%.o: %.cpp
	@echo " CXX     "$<
	$S$(GLBLASM) -s $< $(OBJ_DIR)/$*.cpp 1>&2
	$S$(CC) $(CFLAGS) -c -o $@ $(OBJ_DIR)/$*.cpp 1>&2
	$S$(PPROC) $(PPROCFLAGS) $@
