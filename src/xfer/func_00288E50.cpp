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
extern s32 D_004AFAC0 __attribute__((section(".data")));
s32 func_00288E50(s32 arg0)
{
  int new_var;
  new_var = arg0;
  return *(new_var + (&D_004AFAC0));
  new_var = new_var * 4;
}
}
