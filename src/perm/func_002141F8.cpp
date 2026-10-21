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
s32 func_00214160(s32, s32);
void func_002141F8(s32 arg0)
{
  s32 var_a1;
  var_a1 = 0;
  var_a1 = 0;
  do
  {
    func_00214160(arg0, var_a1);
    var_a1 += 1;
    var_a1 = var_a1;
  }
  while (var_a1 < 0xC);
}
}
