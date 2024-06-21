#ifndef _MSL_MATH_H
#define _MSL_MATH_H

#define FP_NAN 1
#define FP_INFINITE 2
#define FP_ZERO 3
#define FP_NORMAL 4
#define FP_SUBNORMAL 5

#define fpclassify(x)                                                                              \
    ((sizeof(x) == sizeof(float)) ? __fpclassifyf((float)(x)) : __fpclassifyd((double)(x)))

#define isnormal(x) (fpclassify(x) == FP_NORMAL)
#define isnan(x) (fpclassify(x) == FP_NAN)
#define isinf(x) (fpclassify(x) == FP_INFINITE)
#define isfinite(x) ((fpclassify(x) > FP_INFINITE))

#ifdef __cplusplus
extern "C" {
#endif

int __fpclassifyf(float);
int __fpclassifyd(double);

double sin(double);
double cos(double);
double tan(double);
double atan2(double, double);
double ceil(double);
double asin(double);
double acos(double);
double exp(double);
double floor(double);

#ifdef __cplusplus
}
#endif

#endif