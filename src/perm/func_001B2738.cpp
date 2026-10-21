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
void func_001BAE10(s32, s32);
void func_0026D950(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0027F9CC(s32, s32);
extern s32 D_002C72D0 __attribute__((section(".data")));
extern s32 D_002C72D4 __attribute__((section(".data")));
extern s32 D_00353D88 __attribute__((section(".data")));
inline int inline_fn(s32 arg0, int arg1)
{
  return arg0 == arg1;
}

void func_001B2738(void *arg0, s32 arg1, s32 arg2, s32 unused3, s32 arg4, s32 arg5, s32 arg6, s32 arg7)
{
  s32 temp_s1;
  s32 new_var;
  int new_var2;
  s32 var_a1;
  new_var = arg4;
  temp_s1 = arg0 + 0x50;
  func_0026D950(temp_s1, (s32) (&D_00353D88), (!inline_fn(arg2, new_var2 = 0)) ? (0x2B) : (0x20), arg1, new_var, arg5, arg6, arg7);
  if (arg1 < 2)
  {
    var_a1 = D_002C72D0;
  }
  else
  {
    var_a1 = D_002C72D4;
  }
  func_0027F9CC(temp_s1, var_a1);
  func_001BAE10(*((s32 *) (((char *) arg0) + 0x44)), temp_s1);
}
}
