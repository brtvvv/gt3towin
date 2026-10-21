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
s32 func_001FF6B0(s32);
extern s32 D_00340610 __attribute__((section(".data")));
s32 func_002068C8(s32 arg0)
{
  s32 *new_var4;
  s32 new_var3;
  s32 new_var;
  char *new_var2;
  func_001FF6B0(arg0);
  new_var2 = (char *) arg0;
  new_var4 = &D_00340610;
  new_var3 = arg0;
  *((s8 *) (new_var2 + 4)) = 5;
  new_var = new_var3;
  *((s32 *) (new_var2 + 0x100)) = 0x87654321;
  *((s32 **) (((char *) new_var) + 0)) = new_var4;
  *((s8 *) (((char *) new_var) + 5)) = 5;
  return new_var;
}
}
