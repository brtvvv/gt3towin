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
s32 func_0027D5B8(s32 *arg0, s32 *arg1)
{
  int new_var;
  s32 new_var2;
  s32 var_v0;
  new_var2 = (var_v0 = 0);
  new_var = (arg1 == arg0) || ((new_var2, func_0027FC78(*arg0, *arg1) == 0));
  if (new_var)
  {
    if (1)
    {
    }
    var_v0 = 1;
  }
  return var_v0;
}
}
