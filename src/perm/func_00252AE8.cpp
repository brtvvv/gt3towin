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
inline void *inline_fn(int arg0)
{
  return (void *) arg0;
}

s32 func_00252AE8(void)
{
  return (*((s32 *) (((char *) inline_fn(0x70003000)) + 0x11C))) - (*((s32 *) (((char *) inline_fn(0x70003000)) + 0x118)));
}
}
