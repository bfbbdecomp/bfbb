#ifndef _MSL_SIZE_T_H
#define _MSL_SIZE_T_H

// prevent Visual Studio Code complaining about __typeof__
#ifdef _MSC_VER
typedef unsigned long size_t;
#else
typedef __typeof__(sizeof(0)) size_t;
#endif

#endif