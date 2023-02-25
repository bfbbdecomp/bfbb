.include "macros.inc"
.file "xColor.cpp"

# 0x803CCB00 - 0x803CCB38
.section .sdata2, "a"
.balign 8

.obj g_RED, global
	.4byte 0xFF0000FF
.endobj g_RED

.obj g_GREEN, global
	.4byte 0x00FF00FF
.endobj g_GREEN

.obj g_BLUE, global
	.4byte 0x0000FFFF
.endobj g_BLUE

.obj g_CYAN, global
	.4byte 0x00FFFFFF
.endobj g_CYAN

.obj g_YELLOW, global
	.4byte 0xFFFF00FF
.endobj g_YELLOW

.obj g_WHITE, global
	.4byte 0xFFFFFFFF
.endobj g_WHITE

.obj g_GRAY50, global
	.4byte 0x808080FF
.endobj g_GRAY50

.obj g_NEON_RED, global
	.4byte 0xFF2000FF
.endobj g_NEON_RED

.obj g_NEON_GREEN, global
	.4byte 0x20FF00FF
.endobj g_NEON_GREEN

.obj g_NEON_BLUE, global
	.4byte 0x2020FFFF
.endobj g_NEON_BLUE

.obj g_PIMP_GOLD, global
	.4byte 0xD7DC13FF
.endobj g_PIMP_GOLD

.obj g_ORANGE, global
	.4byte 0xFFA500FF
.endobj g_ORANGE

.obj g_LAVENDER, global
	.4byte 0xC869E5FF
.endobj g_LAVENDER

.obj g_PINK, global
	.4byte 0xFF80FFFF
.endobj g_PINK
