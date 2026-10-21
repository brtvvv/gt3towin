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
s32 func_001033B0(void *arg0)
{
  int new_var2;
  s32 temp_a1;
  int new_var;
  s32 var_s0;
  s32 var_s2;
  void *temp_v1;
  var_s0 = *((s32 *) (((char *) arg0) + 4));
  var_s2 = 0;
  new_var = var_s0 < (*((s32 *) (((char *) arg0) + 8)));
  if (new_var)
  {
    new_var2 = 1;
    do
    {
      temp_v1 = *((void **) (((char *) arg0) + 0x14));
      temp_a1 = var_s0;
      var_s0 += new_var2;
      var_s2 = ((*((s32 (**)(void *, s32)) (((char *) temp_v1) + 0x1C)))(arg0 + (*((s16 *) (((char *) temp_v1) + 0x18))), temp_a1) != 0) ? (var_s2 + new_var2) : (var_s2);
    }
    while (var_s0 < (*((s32 *) (((char *) arg0) + 8))));
  }
  return var_s2;
}
}
