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
s32 func_0017CFA8(void);
inline int inline_fn(s32 arg0, int arg1)
{
  return arg0 + arg1;
}

s32 func_00184520(s32 arg0, s32 arg1)
{
  u32 temp_a2;
  temp_a2 = arg1;
  temp_a2 = temp_a2 - 0x100;
  if (temp_a2 < 2U)
  {
    return inline_fn(arg0, (temp_a2 * 0x148) + 0x1ADB4);
  }
  if (arg1)
  {
    return func_0017CFA8();
  }
  else
  {
    return func_0017CFA8();
  }
}
}
