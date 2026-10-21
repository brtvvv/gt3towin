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
s32 func_001D4E80(s32, s32);
extern s32 D_0033A5D0 __attribute__((section(".data")));
s32 func_001D4FB8(s32 arg0, s32 arg1)
{
  s32 new_var2;
  s32 **new_var;
  func_001D4E80(arg0, arg1);
  *((s32 *) (((char *) arg0) + 0x1F0)) = 1;
  *((s32 *) (((char *) arg0) + 0x1F4)) = 1;
  new_var = (s32 **) (((char *) arg0) + 0x1C);
  *new_var = &D_0033A5D0;
  new_var2 = arg0;
  return new_var2;
}
}
