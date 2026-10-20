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
s32 func_00232BB8(s32, s32);
s32 func_00243D10(s32, s32);
extern s32 D_00343ED8 __attribute__((section(".data")));
void func_0023AE48(s32 **arg0, s32 arg1)
{
  s32 **new_var6;
  s32 **new_var5;
  int new_var2;
  s32 *new_var3;
  s32 **new_var4;
  new_var3 = &D_00343ED8;
  new_var5 = &new_var3;
  *arg0 = *new_var5;
  new_var2 = 8;
  new_var2 = 2;
  new_var6 = arg0 + new_var2;
  new_var4 = new_var6;
  func_00232BB8((s32) new_var4, new_var2);
  func_00243D10((s32) arg0, arg1);
}
}
