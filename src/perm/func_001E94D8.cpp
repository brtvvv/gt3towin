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
s32 func_001E66A8(s32);
s32 func_001E6738(s32);
s32 func_001E6AD8(s32);
s32 func_001E73C8(s32);
s32 func_001E7E08(s32);
s32 func_001E8300(s32);
s32 func_001E8390(s32);
s32 func_001E8440(s32);
s32 func_001E8720(s32);
s32 func_001E8788(s32);
s32 func_001E8B48(s32);
s32 func_001E8CD0(s32, s32);
s32 func_001E8F48(s32, s32);
s32 func_001E9418(s32);
void func_001E94D8(s32 arg0)
{
  s32 var_s1;
  void *temp_v0;
  func_001E7E08(arg0);
  var_s1 = 1;
  func_001E9418(arg0);
  func_001E8300(arg0);
  func_001E8390(arg0);
  func_001E8B48(arg0);
  func_001E8788(arg0);
  func_001E66A8(arg0);
  func_001E6738(arg0);
  func_001E6AD8(arg0);
  func_001E73C8(arg0);
  func_001E8440(arg0);
  func_001E8720(arg0);
  temp_v0 = arg0 + 0xF84;
  if (((((*((f32 *) (((char *) temp_v0) + 0x68))) + (*((f32 *) (((char *) temp_v0) + 0x10C)))) + (*((f32 *) (((char *) temp_v0) + 0x1B0)))) + (*((f32 *) (((char *) temp_v0) + 0x254)))) != 0.0f)
  {
    if (arg0 || temp_v0)
    {
      var_s1 = 0;
    }
    else
    {
      var_s1 = 0;
    }
  }
  func_001E8CD0(arg0, var_s1);
  func_001E8F48(arg0, var_s1);
}
}
