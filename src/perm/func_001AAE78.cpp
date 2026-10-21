extern "C" {

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
void func_0021FBC8(s32);
s32 func_0022DB58(s32, s32);
extern s32 D_002C4518 __attribute__((section(".data")));
void func_001AAE78(void *arg0)
{
 do { if ((*((s32 *) (((char *) arg0) + 0))) != 0) { func_0021FBC8((s32) (4 + arg0)); func_0022DB58((s32) (&D_002C4518), *((s32 *) (((char *) arg0) + 0))); } *((s32 *) (((char *) arg0) + 0x6B8)) = 0; } while (0);
  *((s32 *) (((char *) arg0) + 0)) = 0;
  *((s32 *) (((char *) arg0) + 0x6B4)) = 0;
}
}
