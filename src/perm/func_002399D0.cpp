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
s32 func_00232700(void);
s32 func_002399D0(void *arg0, s32 arg1)
{
  s32 var_s0;
  int new_var;
  new_var = (*((s32 *) (((char *) arg0) + 0x18))) + (arg1 * 2);
  var_s0 = (*((u16 *) (((char *) new_var) + 0x1D4))) * 0x64;
  if (func_00232700() != 0)
  {
    var_s0 *= 0x64;
  }
  return var_s0;
}
}
