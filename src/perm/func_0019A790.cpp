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
inline int inline_fn(int arg0, int arg1)
{
  return arg0 | arg1;
}

void func_0019A790(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  int new_var;
  new_var = arg0 + (arg1 * 4);
  *((s32 *) (((char *) new_var) + 0x1C)) = (s32) inline_fn((arg4 << 0x10) | arg2, (arg3 << 8) | 0x80000000);
}
}
