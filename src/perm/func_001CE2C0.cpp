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
s32 func_0025FD38(s32, s32, s32, s32, s32);
inline void *inline_fn(void *arg0)
{
  return arg0;
}

s32 func_001CE2C0(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 var_v0;
  void *temp_v0;
  temp_v0 = *((void **) (((char *) arg0) + 0x60));
  if (temp_v0 == 0)
  {
    var_v0 = 0;
  }
  else
  {
    *((s32 *) (((char *) temp_v0) + 0x118)) = 0;
    var_v0 = func_0025FD38((s32) temp_v0, arg1, arg2, arg3, 2);
    if (var_v0 == 0)
    {
      *((s32 *) (((char *) arg0) + 0x3C)) = 0;
 do { *((s32 *) (((char *) inline_fn(arg0)) + 0x40)) = 0; } while (0);
    }
  }
  return var_v0;
}
}
