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
s32 func_0027FC78(s32, s32);
s32 func_001CE200(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 var_v0;
  void *temp_s0;
  if (temp_s0)
  {
    temp_s0 = *((void **) (((char *) arg0) + 0x60));
    var_v0 = 0;
  }
  else
  {
    temp_s0 = *((void **) (((char *) arg0) + 0x60));
    var_v0 = 0;
  }
  if (temp_s0 != 0)
  {
    if (((*((s32 *) (((char *) temp_s0) + 0x110))) != 0) && (func_0027FC78(arg1, (s32) (temp_s0 + 0x90)) == 0))
    {
      *((s32 *) (((char *) temp_s0) + 0x118)) = 1;
      var_v0 = func_0025FD38((s32) temp_s0, 0, 0, arg3, 1);
    }
    else
    {
      *((s32 *) (((char *) temp_s0) + 0x118)) = 0;
      var_v0 = func_0025FD38((s32) temp_s0, arg1, arg2, arg3, 1);
    }
    *((s32 *) (((char *) arg0) + 0x3C)) = (*((s32 *) (((char *) arg0) + 0x40)) = 0);
  }
  return var_v0;
}
}
