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
s32 func_001B9040(void *arg0)
{
  s32 new_var;
  void *new_var2;
  new_var = *((s32 *) (((char *) arg0) + 0xAE4));
  new_var2 = arg0 + (new_var * 4);
  return *((s32 *) (((char *) new_var2) + 0xAE8));
}
}
