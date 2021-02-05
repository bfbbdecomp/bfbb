#ifndef _MSL_SIZE_T_H
#define _MSL_SIZE_T_H

#ifdef _MSC_VER
typedef size_t; // hack to make VS Code not complain about size_t in operator new
#elif !defined(__MWERKS__) || __MWERKS__ < 0x2400
typedef unsigned long size_t;
#else
typedef __typeof__(sizeof(0)) size_t;
#endif

#endif