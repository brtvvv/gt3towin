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
s32 func_00212AA0(s32, s32);
void func_00212B48(s32 arg0)
{
  s32 var_a1;
  s32 var_s0;
  var_s0 = (var_a1 = 0);
  var_a1 = 0;
  do
  {
    func_00212AA0(arg0, var_a1);
    var_s0 += 1;
    var_a1 = var_s0;
  }
  while (var_s0 < 0xC);
}
}
