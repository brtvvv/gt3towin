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
s32 func_0025FAD8(s32, s32, s32);
s32 func_00260388(s32 arg0)
{
  s32 temp_v0;
  int new_var;
  unsigned int new_var2;
  s32 var_v1;
  temp_v0 = func_0025FAD8(arg0, 4, 0);
  var_v1 = 0;
  if (temp_v0 != 1)
  {
    new_var2 = temp_v0;
    var_v1 = ((new_var2 ^ (new_var = 4)) == 0) ? (0) : (1);
  }
  return var_v1;
}
}
