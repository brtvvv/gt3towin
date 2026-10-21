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
void func_00102178(s32, s32);
s32 func_00252790(s32);
s32 func_00256DB0(s32, s32, s32, s32);
s32 func_0025B158(s32);
void func_00102668(s32 arg0, s32 arg1)
{
  s32 var_s0;
  var_s0 = 0;
  func_00102178(arg0, arg1);
  func_00252790(6);
  func_0025B158(0);
  if ((*((s32 *) (((char *) arg0) + 0x10))) > 0)
  {
    var_s0 = 0;
    do
    {
      func_00256DB0(var_s0, 0, var_s0 + 1, 0x200);
      func_00256DB0(0x27F - var_s0, 0, 0x280 - var_s0, 0x200);
      var_s0 += 2;
      var_s0 = var_s0;
    }
    while (var_s0 < (*((s32 *) (((char *) arg0) + 0x10))));
  }
  *((s32 *) (((char *) arg0) + 0x10)) = (s32) ((*((s32 *) (((char *) arg0) + 0x10))) + 0x10);
}
}
