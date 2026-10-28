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
typedef s32 (*VFNPTR)();
typedef struct VTE
{
  s16 d;
  s16 i;
  VFNPTR f;
} VTE;
s32 func_00168210(s32);
volatile short func_00219680(void);
s32 func_00235B10(s32);
inline int inline_fn(s32 arg0, int arg1)
{
  return arg0 - arg1;
}

s32 func_00167330(void *arg0, s32 arg1)
{
  s32 temp_a0;
  int new_var4;
  void *new_var2;
  int new_var;
  u8 *new_var3;
  s32 var_s0;
  var_s0 = 0;
  temp_a0 = *((s32 *) (((char *) ((  {
    s32 _g = func_00219680() + 0x307C8;
    _g;
  }
))) + 0x540));
  new_var = 0xE40;
  if (temp_a0 != 0)
  {
    new_var4 = new_var;
    new_var2 = arg0 + new_var4;
    new_var3 = &(*((u8 *) (((char *) func_00235B10(temp_a0 + 0x10)) + 0x12)));
    *((s32 *) (((char *) arg0) + 0x1000)) = (s32) inline_fn(*new_var3, inline_fn(arg1, 1));
    var_s0 = func_00168210(new_var2);
  }
  return var_s0;
}
}
