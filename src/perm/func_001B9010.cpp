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
  return arg0 * 4;
}

s32 func_001B9010(void *arg0)
{
  return *((s32 *) (((char *) (arg0 + inline_fn(*((s32 *) (((char *) arg0) + 0xAE4))))) + 0xAF0));
}
}
