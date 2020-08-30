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

# Inputs
S_FILES := $(wildcard asm/*.s)
C_FILES := $(wildcard src/*.c)
LDSCRIPT := ldscript.lcf

# Outputs
DOL     := main.dol
ELF     := $(DOL:.dol=.elf)
MAP     := bfbb.map
# O_FILES := $(S_FILES:.s=.o) $(C_FILES:.c=.o)

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
CC      := $(WINE) tools/mwcc_compiler/mwcceppc.exe
LD      := $(WINE) tools/mwcc_compiler/mwldeppc.exe
ELF2DOL := tools/elf2dol
SHA1SUM := sha1sum
ASMDIFF := ./asmdiff.sh

# Options
ASFLAGS := -mgekko -I include
LDFLAGS := -map $(MAP)
CFLAGS  := -Cpp_exceptions off -proc gekko -fp hard -O2,p -i include

# elf2dol needs to know these in order to calculate sbss correctly.
SDATA_PDHR := 9
SBSS_PDHR := 10

#-------------------------------------------------------------------------------
# Recipes
#-------------------------------------------------------------------------------

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

%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
