.include "macros.inc"
.file "critical_regions.gamecube.c"

# 0x801E25FC - 0x801E2608
.text
.balign 4

.fn __end_critical_region, global
/* 801E25FC 001DF6DC  4E 80 00 20 */	blr
.endfn __end_critical_region

.fn __begin_critical_region, global
/* 801E2600 001DF6E0  4E 80 00 20 */	blr
.endfn __begin_critical_region

.fn __kill_critical_regions, global
/* 801E2604 001DF6E4  4E 80 00 20 */	blr
.endfn __kill_critical_regions
