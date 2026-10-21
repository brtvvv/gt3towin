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
s32 func_0027FC78(s32, s32);
s32 func_001D8C38(void *arg0, s32 arg1)
{
  s32 new_var;
  new_var = *((s32 *) (((char *) arg0) + 0x110));
  return func_0027FC78(arg1, new_var) == 0;
}
}
