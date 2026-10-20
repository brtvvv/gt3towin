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
inline int inline_fn(s32 arg0)
{
  return arg0 + 0x2C;
}

void func_0019A770(s32 arg0, s32 arg1, s32 arg2)
{
  s8 *temp_a0;
  temp_a0 = inline_fn(arg0) + arg1;
  if (arg2 != 0)
  {
    *temp_a0 = 1;
    return;
  }
  *temp_a0 = 0;
}
}
