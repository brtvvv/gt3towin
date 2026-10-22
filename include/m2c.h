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
/* stala baza adresu (scratchpad 0x70000000, rejestry sprzetowe) trzymana w rejestrze, bez skladania offsetu */
#define M2C_SPR(addr) ({ char *_spr = (char *)(addr); __asm__("" : "+r"(_spr)); _spr; })
/* wywolanie metody wirtualnej gcc 2.9: wpis vtable {short delta; short index; fn} */
#ifdef __cplusplus
typedef s32 (*VFNPTR)(...);
#else
typedef s32 (*VFNPTR)();
#endif
typedef struct VTE { s16 d; s16 i; VFNPTR f; } VTE;
#define VTAB(o, P) (*(VTE **)((char *)(o) + (P)))
#define VFN(o, P, K) (VTAB(o, P)[(K) + 1].f)
#define VTHIS(o, P, K) ((char *)(o) + VTAB(o, P)[(K) + 1].d)
#ifdef __cplusplus
extern "C" char *strcpy(char *, const char *);
/* dostep do tablicy w strukturze: daje taka sama kolejnosc operandow jak oryginal */
template<int OFF, class T> struct M2C_ARR { char pad[OFF]; T a[1]; };
template<class T> struct M2C_ARR<0, T> { T a[1]; };
#define M2C_INDEX(base, type, off, idx) (((M2C_ARR<(off), type> *)(base))->a[idx])
#endif
#endif
