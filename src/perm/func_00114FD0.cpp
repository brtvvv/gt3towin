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
s32 func_001087F8(s32, s32);
s32 func_0010EE00(s32, s32);
s32 func_001CD840(s32, s32, s32);
s32 func_001D3700(s32, s32, s32);
s32 func_00114FD0(s32 arg0)
{
  s32 var_s0;
  s32 var_s1;
  s32 var_s3;
  var_s3 = 0;
  var_s1 = 6;
  var_s0 = 1;
  func_001D3700(1, 0, 1);
  func_001CD840(arg0 + 0x38DC, 0, 7);
  func_001CD840(arg0 + 0x3974, 0, 7);
  do
  {
    if (var_s1 != 5)
    {
      if (var_s1 == 6)
      {
        var_s0 = func_0010EE00(arg0, var_s0);
        if (var_s0 == 0)
        {
          var_s3 = 1;
        }
        else
        {
          var_s1 = 5;
        }
      }
    }
    else
    {
      var_s0 = func_001087F8(arg0, var_s0);
      if (!(var_s0 != 0))
      {
        var_s1 = 6;
      }
      else
      {
        var_s3 = 1;
      }
    }
  }
  while (var_s3 == 0);
  return var_s0;
}
}
