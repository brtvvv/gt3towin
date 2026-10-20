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
s32 func_00146B60(s32, s32);
void *func_00148260(void *arg0, s32 arg1)
{
  s32 temp_a1;
  s32 var_v0;
  s32 var_v0_2;
  s32 *new_var;
  if ((arg1 < 0) || (arg1 >= (*((s32 *) (((char *) arg0) + 0xFB68)))))
  {
    var_v0 = 0;
  }
  else
  {
    new_var = &(*((s32 *) (((char *) (arg0 + (arg1 * 0x10))) + 8)));
    temp_a1 = *new_var;
    if (temp_a1 < 0)
    {
      var_v0_2 = 0xFAF8;
      goto block_7;
    }
    var_v0 = func_00146B60((s32) (arg0 + 0xFA64), temp_a1);
    if (var_v0 == 0)
    {
      var_v0_2 = 0xFA90;
      block_7:
      var_v0 = (s32) (arg0 + var_v0_2);

    }
  }
  return (void *) var_v0;
}
}
