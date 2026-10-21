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
s32 func_001FB4F8(s32, s32, f32);
void func_001EE878(s32 arg0, f32 fparg0)
{
  f32 new_var;
  func_001FB4F8(arg0 + 0xBBA8, 0, new_var);
  new_var = fparg0;
}
}
