#ifndef _MSL_INTRIN_H
#define _MSL_INTRIN_H

#ifndef __MWERKS__

#ifdef __cplusplus
extern "C" {
#endif

void __eieio(void);
void __sync(void);
void __isync(void);
int __abs(int);
float __fabs(float);
float __fnabs(float);
long __labs(long);
int __lhbrx(void*, int);
int __lwbrx(void*, int);
void __sthbrx(unsigned short, void*, int);
void __stwbrx(unsigned int, void*, int);
float __setflm(float);
int __rlwinm(int, int, int, int);
int __rlwnm(int, int, int, int);
int __rlwimi(int, int, int, int);
int __cntlzw(int);
void __dcbf(void*, int);
void __dcbt(void*, int);
void __dcbst(void*, int);
void __dcbtst(void*, int);
void __dcbz(void*, int);
int __mulhw(int, int);
unsigned int __mulhwu(unsigned int, unsigned int);
double __fmadd(double, double, double);
double __fmsub(double, double, double);
double __fnmadd(double, double, double);
double __fnmsub(double, double, double);
float __fmadds(float, float, float);
float __fmsubs(float, float, float);
float __fnmadds(float, float, float);
float __fnmsubs(float, float, float);
double __mffs(void);
float __fabsf(float);
float __fnabsf(float);
float __frsqrte(float);

#ifdef __cplusplus
}
#endif

#endif

#endif