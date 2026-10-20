/* Typy i makra dla surowego wyjscia m2c (--valid-syntax). */
#ifndef M2C_H
#define M2C_H
typedef signed char s8;   typedef unsigned char u8;
typedef short s16;        typedef unsigned short u16;
typedef int s32;          typedef unsigned int u32;
typedef long long s64;    typedef unsigned long long u64;
typedef float f32;        typedef double f64;
#define M2C_UNK s32
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define M2C_ERROR(desc) (0)
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_STRUCT_COPY(dst, src, size) (*(dst) = *(src))
#ifndef NULL
#define NULL 0
#endif
#define M2C_SYNC() __asm__ volatile("sync")
#define M2C_BREAK(n) __asm__ volatile("break")
#define M2C_UNALIGNED32(x) (x)
#endif
