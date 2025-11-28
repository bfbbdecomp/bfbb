#include "bink.h"

static const char huff4decode00[16] = "@ABCDEFGHIJKLMNO";
static const char huff4decode01[32] =
    "\20A\20R\20S\20T\20U\20V\20W\20X\20A\20Y\20Z\20[\20\\\20]\20^\20_";
static const char huff4decode02[32] = " B!X T!\\ C!Z V!^ B!Y U!] C![ W!_";
static const char huff4decode03[32] = " C1X E2\\ D1Z V2^ C1Y E2] D1[ W2_";
static const char huff4decode04[32] = "0D2X1F3\\0E2Z1G3^0D2Y1F3]0E2[1G3_";
static const char huff4decode05[32] = "0FBJ1HD\\0GCK1IE^0FBJ1HD]0GCK1IE_";
static const char huff4decode06[32] = " EAI GC\\ FBZ HD^ EAI GC] FB[ HD_";
static const char huff4decode07[64] =
    "1S2h1U2l1T2j1f2n1S2i1U2m1T2k1g2o";
static const char huff4decode08[64] =
    "\20!\20R\20!\20h\20!\20d\20!\20l\20!\20S\20!\20j\20!\20f\20!\20n\20!\20R\20!\20i\20!\20e\20!\20m\20!\20S\20!\20k\20!\20g\20!\20o";
static const char huff4decode09[64] =
    "1TBh1VCl1UBj1WCn1TBi1VCm1UBk1WCo";
static const char huff4decode10[64] =
    " 2!U C!Y 2!W D!l 2!V C!j 2!X D!n 2!U C!Y 2!W D!m 2!V C!k 2!X D!o";
static const char huff4decode11[64] =
    "\20A\20U\20C\20Y\20B\20W\20D\20l\20A\20V\20C\20j\20B\20X\20D\20n\20A\20U\20C\20Y\20B\20W\20D\20m\20A\20V\20C\20k\20B\20X\20D\20o";
static const char huff4decode12[64] =
    " \"!S \"!h \"!U \"!l \"!T \"!j \"!f \"!n \"!S \"!i \"!U \"!m \"!T \"!k \"!g \"!o";
static const char huff4decode13[128] =
    "132d132x132f132|132e132z132g132~132d132y132f132}132e132{132g132";
static const char huff4decode14[128] =
    "132T132x132e132|132T132z132v132~132T132y132e132}132T132{132w132";
static const char huff4decode15[128] =
    " 2!4 3!e 2!4 3!i 2!4 3!g 2!4 3!| 2!4 3!f 2!4 3!z 2!4 3!h 2!4 3!~ 2!4 3!e 2!4 3!i 2!4 3!g 2!4 3!} 2!4 3!f 2!4 3!{ 2!4 3!h 2!4 3!";
static const char huff4reads[16] = "\4\5\5\5\5\5\5\6\6\6\6\6\6\7\7\7";
static const char mask2[64] =
    "\0\0\0\0\377\0\0\0\0\377\0\0\377\377\0\0\0\0\377\0\377\0\377\0\0\377\377\0\377\377\377\0\0\0\0\377\377\0\0\377\0\377\0\377\377\377\0\377\0\0\377\377\377\0\377\377\0\377\377\377\377\377\377\377";
static const char mask1[64] =
    "\377\377\377\377\0\377\377\377\377\0\377\377\0\0\377\377\377\377\0\377\0\377\0\377\377\0\0\377\0\0\0\377\377\377\377\0\0\377\377\0\377\0\377\0\0\0\377\0\377\377\0\0\0\377\0\0\377\0\0\0\0\0\0\0";
static const char mask4[16] = "\0\0\0\0\377\377\0\0\0\0\377\377\377\377\377\377";
static const char mask3[16] = "\377\377\377\377\0\0\377\377\377\377\0\0\0\0\0\0";
