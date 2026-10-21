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
s32 func_00203A08(s32);
extern s32 D_0033FF68 __attribute__((section(".data")));
s32 func_00203EA8(s32 arg0)
{
  s8 *new_var;
  new_var = (s8 *) (((char *) arg0) + 5);
  func_00203A08(arg0);
  *new_var = (*((s8 *) (((char *) arg0) + 4)) = 3);
  *((s32 **) (((char *) arg0) + 0)) = &D_0033FF68;
  return arg0;
}
}
