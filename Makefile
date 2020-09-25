ifneq ($(findstring MINGW,$(shell uname)),)
  WINDOWS := 1
endif
ifneq ($(findstring MSYS,$(shell uname)),)
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
PPROC   := python tools/postprocess.py
ELF2DOL := tools/elf2dol
SHA1SUM := sha1sum
ASMDIFF := ./asmdiff.sh

# Options
INCLUDES := -Isrc/dolphin/include -Isrc/CodeWarrior

ASFLAGS := -mgekko -I include
LDFLAGS := -map $(MAP)
CFLAGS  := -g -Cpp_exceptions off -proc gekko -fp hard -str reuse,pool,readonly \
           -pragma "check_header_flags off" -pragma "force_active on" \
           -inline off -O4,p -msgstyle gcc -gccincludes $(INCLUDES)
PREPROCESS := -preprocess -gccincludes $(INCLUDES)
PPROCFLAGS := -fsymbol-fixup

# elf2dol needs to know these in order to calculate sbss correctly.
SDATA_PDHR := 9
SBSS_PDHR := 10

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
	$(ELF2DOL) $< $@ $(SDATA_PDHR) $(SBSS_PDHR) $(TARGET_COL)
	$(SHA1SUM) -c bfbb.sha1 || $(ASMDIFF)

clean:
	rm -f $(DOL) $(ELF) $(O_FILES) $(MAP)
	$(MAKE) -C tools clean

tools:
	$(MAKE) -C tools

$(ELF): $(O_FILES) $(LDSCRIPT)
	$(LD) $(LDFLAGS) -o $@ -lcf $(LDSCRIPT) $(O_FILES)
# The Metrowerks linker doesn't generate physical addresses in the ELF program headers. This fixes it somehow.
	$(OBJCOPY) $@ $@

$(OBJ_DIR)/%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<
	$(PPROC) $(PPROCFLAGS) $@

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(PREPROCESS) -o $*.cp $<
	$(CC) $(CFLAGS) -c -o $@ $*.cp
