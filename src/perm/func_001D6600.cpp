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
f32 func_001D6600(f32 fparg0, f32 fparg1)
{
  f32 var_f0;
  f32 new_var;
  f32 new_var2;
  if (fparg0)
  {
    new_var = fparg1;
    var_f0 = new_var;
  }
  else
  {
    new_var = fparg1;
    var_f0 = new_var;
  }
  if (fparg0 < fparg1)
  {
    var_f0 = fparg0;
  }
  new_var2 = var_f0;
  return new_var2;
}
}
