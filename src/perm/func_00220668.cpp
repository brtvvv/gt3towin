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
s32 func_00220668(void *arg0, s32 arg1)
{
  s32 *new_var;
  s32 var_v0;
  var_v0 = 0;
  if (arg1 & 1)
  {
    new_var = (s32 *) (((char *) arg0) + 0x10);
    var_v0 = (*new_var) & 4;
    var_v0 = var_v0 != 0;
  }
  return var_v0;
}
}
