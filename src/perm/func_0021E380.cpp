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
s32 func_0021E2E0(s32, s32);
s32 func_0021E340(s32, s32, s32);
s32 func_0021E380(s32 arg0, s32 arg1)
{
  s32 temp_a1;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 var_s0;
  int new_var;
  s32 var_s1;
  new_var = 0;
  var_s1 = new_var;
  temp_v0 = func_0021E2E0(arg0, arg1);
  var_s0 = new_var;
  if (temp_v0 > new_var)
  {
    do
    {
      temp_a1 = var_s1;
      var_s1 += 1;
      temp_v0_2 = func_0021E340(arg0, temp_a1, arg1);
      var_s0 = (var_s0 < temp_v0_2) ? (temp_v0_2) : (var_s0);
    }
    while (var_s1 < temp_v0);
  }
  return var_s0;
}
}
