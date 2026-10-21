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
void func_001B25E8(s32, s32, s32);
inline int inline_fn(s32 arg0, int arg1, int arg2)
{
  return (arg0 * arg1) + arg2;
}

void func_001B3078(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  func_001B25E8(arg0 + inline_fn(arg1, 0xF0, 0x240), arg2, arg3);
}
}
