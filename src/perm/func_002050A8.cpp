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
extern s32 D_00340190 __attribute__((section(".data")));
s32 func_002050A8(s32 arg0)
{
  s32 *new_var;
  func_001FF6B0(arg0);
  new_var = &D_00340190;
  *((s32 *) (((char *) arg0) + 0x100)) = 0x87654321;
  *((s32 **) (((char *) arg0) + 0)) = new_var;
  *((s8 *) (((char *) arg0) + 4)) = 5;
  *((s8 *) (((char *) arg0) + 5)) = 5;
  return arg0;
}
}
