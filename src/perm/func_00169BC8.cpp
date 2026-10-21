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
s32 func_00219680(void);
s32 func_00235B10(s32);
inline char *inline_fn(char *arg0)
{
  return arg0 + 0x540;
}

s32 func_00169BC8(void)
{
  s32 temp_a0;
  s32 var_v0;
  var_v0 = func_00219680() + 0x307C8;
  temp_a0 = *((s32 *) inline_fn((char *) var_v0));
  var_v0 = 0;
  if (temp_a0 != 0)
  {
    var_v0 = *((u8 *) (((char *) func_00235B10(temp_a0 + 0x10)) + 0x12));
    var_v0 = var_v0 != 1;
  }
  return var_v0;
}
}
