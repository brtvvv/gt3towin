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
typedef s32 (*VFNPTR)();
typedef struct VTE
{
  s16 d;
  s16 i;
  VFNPTR f;
} VTE;
inline int inline_fn(int arg0)
{
  return arg0;
}

s32 func_00137970(s32 *arg0)
{
  s32 temp_a0;
  int new_var2;
  s32 var_v0;
  int new_var;
  if (new_var)
  {
    temp_a0 = *arg0;
    var_v0 = 0;
    new_var2 = temp_a0 < 5;
  }
  else
  {
    temp_a0 = *arg0;
    var_v0 = 0;
    new_var2 = temp_a0 < 5;
  }
  if (inline_fn(new_var2))
  {
    new_var = 0;
    new_var = temp_a0 > new_var;
    var_v0 = new_var;
  }
  return var_v0;
}
}
