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
s32 func_00282CE8(s32 arg0, s32 (*arg1)(void *))
{
  s32 var_s0;
  s32 var_s3;
  void *var_s1;
  void *var_s2;
  var_s3 = 0;
  var_s2 = arg0 + 0x1D8;
  if (var_s2 != 0)
  {
    do
    {
      var_s0 = *((s32 *) (((char *) var_s2) + 4));
      var_s0 = var_s0 - 1;
      var_s1 = *((void **) (((char *) var_s2) + 8));
      if (var_s0 >= 0)
      {
        do
        {
          if ((*((s16 *) (((char *) var_s1) + 0xC))) != 0)
          {
            var_s3 |= arg1(var_s1);
          }
          var_s0 -= 1;
          var_s1 += 0x58;
        }
        while (var_s0 >= 0);
      }
      var_s2 = *((void **) (((char *) var_s2) + 0));
    }
    while (var_s2 != 0);
  }
  return var_s3;
}
}
