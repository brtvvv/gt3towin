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
unsigned long long func_001FF6B0(s32);
extern s32 D_0033FBA8 __attribute__((section(".data")));
s32 func_00200830(s32 arg0)
{
  s32 new_var;
  func_001FF6B0(arg0);
  new_var = arg0;
  *((s32 **) (((char *) new_var) + 0)) = &D_0033FBA8;
  *((s32 *) (((char *) arg0) + 0x124)) = 0x87654321;
  *((f32 *) (((char *) new_var) + 0x104)) = 60.0f;
  *((s32 *) (((char *) arg0) + 0x15C)) = 0;
  *((s32 *) (((char *) new_var) + 0x100)) = 0;
  *((s8 *) (((char *) arg0) + 4)) = 0;
  *((s8 *) (((char *) new_var) + 5)) = 0;
  return arg0;
}
}
