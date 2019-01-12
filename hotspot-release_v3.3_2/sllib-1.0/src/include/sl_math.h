#ifndef _SL_MATH_H_
#define _SL_MATH_H_
#include <sl_types.h>

#ifdef __cplusplus
extern "C" {
#endif

SL_FLOAT SLMATH_Sine(SL_FLOAT X);

SL_FLOAT SLMATH_Cosine(SL_FLOAT X);

SL_FLOAT SLMATH_Floor(SL_FLOAT X);

SL_FLOAT SLMATH_Ceiling(SL_FLOAT X);

SL_FLOAT SLMATH_SquareRoot(SL_FLOAT X);

SL_FLOAT SLMATH_Log2(SL_FLOAT X);

SL_FLOAT SLMATH_Power(SL_FLOAT X,SL_FLOAT Y);

SL_FLOAT SLMATH_Modulo(SL_FLOAT X,SL_FLOAT Y);

SL_FLOAT SLMATH_Exp(SL_FLOAT X);

SL_FLOAT SLMATH_Absolute(SL_FLOAT X);

SL_FLOAT SLMATH_ArcCosine(SL_FLOAT X);

SL_FLOAT SLMATH_Tangent(SL_FLOAT X);

SL_FLOAT SLMATH_Tangent(SL_FLOAT X);

SL_U32 SLMATH_Float2UInt(SL_FLOAT X);

SL_FLOAT SLMATH_UInt2Float(SL_U32 X);

SL_FLOAT SLMATH_Multiply(SL_FLOAT X,SL_FLOAT Y);

#ifdef __cplusplus
}
#endif

#endif
