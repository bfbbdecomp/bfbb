#!/bin/bash

OBJDUMP="$DEVKITPPC/bin/powerpc-eabi-objdump -D -bbinary -EB -mpowerpc -M gekko"
$OBJDUMP baserom.dol > baserom.dump
$OBJDUMP main.dol > main.dump
diff -u --color=always baserom.dump main.dump