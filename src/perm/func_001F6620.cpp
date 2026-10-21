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
void func_001F5800(s32, s32);
void func_001F6620(s32 arg0, u8 *arg1, u8 *arg2)
{
  u8 *new_var;
  new_var = arg2;
  func_001F5800(arg0, (*new_var) - (*arg1));
  *arg1 = *arg2;
}
}
