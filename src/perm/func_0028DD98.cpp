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
s32 func_0027EB34(s32, s32, s32);
extern s32 D_0030908C __attribute__((section(".data")));
extern s32 D_003098EC __attribute__((section(".data")));
extern s32 D_004B2B28 __attribute__((section(".data")));
s32 func_0028DD98(void)
{
  s32 var_s2;
  s32 *new_var;
  var_s2 = 0;
  new_var = &D_0030908C;
  if ((func_0027EB34((s32) (&D_004B2B28), (s32) new_var, 4) != 0) && (func_0027EB34((s32) (&D_004B2B28), D_003098EC, 4) != 0))
  {
    var_s2 = func_0027EB34((s32) new_var, D_003098EC, 4) != 0;
  }
  return var_s2;
}
}
