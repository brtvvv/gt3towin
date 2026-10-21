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
s32 func_0025E8C8(s32, s32, s32, s32, s32);
extern s32 D_004A8EE0 __attribute__((section(".data")));
void func_0025E840(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  short new_var;
  new_var = (!(arg3 != 0)) ? (7) : (8);
  func_0025E8C8((s32) (&D_004A8EE0), new_var, arg0, arg1, arg2);
}
}
