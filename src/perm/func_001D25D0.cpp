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
inline s32 *inline_fn(void *arg0, int arg1)
{
  return (s32 *) (((char *) arg0) + arg1);
}

void func_001D25D0(void *arg0, f32 fparg0)
{
  void *temp_a0;
  *inline_fn(arg0, 0x20) = 0;
  temp_a0 = arg0 + 0x20;
  *((f32 *) (((char *) temp_a0) + 8)) = fparg0;
  *((s32 *) (((char *) temp_a0) + 4)) = 0;
}
}
