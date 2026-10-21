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
inline int inline_fn(s32 *arg0, s32 arg1, int arg2)
{
  return (*arg0) + (arg1 * arg2);
}

s32 func_00239678(void *arg0, s32 arg1)
{
  return *((s32 *) (((char *) inline_fn((s32 *) (((char *) arg0) + 0x18), arg1, 4)) + 0x110));
}
}
