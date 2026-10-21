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
s32 func_0019BC08(s32, s32);
void func_0019BB90(s32 *arg0, s32 arg1)
{
  s32 var_s1;
  int new_var;
  void *var_s0;
  var_s1 = 0;
  new_var = 0;
  if ((*arg0) > new_var)
  {
    var_s0 = arg0;
    var_s0 = var_s0 + 4;
    do
    {
      func_0019BC08(arg1, (s32) var_s0);
      var_s1 += 1;
      var_s0 += 0x20;
    }
    while (var_s1 < (*arg0));
  }
}
}
