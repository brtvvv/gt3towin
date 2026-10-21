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
s32 func_00235AE0(s32);
s32 func_00169B80(void)
{
  s32 temp_a0;
  s32 var_v0;
  int new_var;
  var_v0 = func_00219680() + 0x307C8;
  temp_a0 = *((s32 *) (((char *) var_v0) - -0x540));
  var_v0 = 0;
  if (temp_a0 != 0)
  {
    new_var = 1;
    var_v0 = (*((u8 *) (((char *) func_00235AE0(temp_a0 + 0x10)) + 0x11))) != new_var;
  }
  return var_v0;
}
}
