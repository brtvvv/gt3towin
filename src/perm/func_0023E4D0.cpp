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
s32 func_0023E4D0(u8 *arg0)
{
  s32 var_a1;
  u32 temp_v1;
  u8 *var_a0;
  u8 var_v1;
  var_v1 = *arg0;
  var_a1 = 0;
  var_a0 = arg0 + 1;
  if (var_v1 != 0)
  {
    do
    {
      var_a1 = (var_a1 * 0x10) + var_v1;
      temp_v1 = var_a1 & 0xF0000000;
      if (temp_v1 != 0)
      {
        var_a1 ^= temp_v1 >> 0x18;
      }
      var_v1 = *var_a0;
      var_a1 = var_a1 & (~temp_v1);
      var_a0 += 1;
    }
    while (var_v1 != 0);
  }
  return var_a1;
}
}
