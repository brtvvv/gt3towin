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
void func_001F66B0(s32 arg0, s16 *arg1, s16 *arg2)
{
  func_001F5800(arg0, (*arg2) - (*arg1));
  *arg1 = (s16) (*arg2);
}
}
