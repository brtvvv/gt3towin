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
s32 func_002050A8(s32);
extern s32 D_003403C0 __attribute__((section(".data")));
s32 func_00205A58(s32 arg0)
{
  func_002050A8(arg0);
  *((s8 *) (((char *) arg0) + 5)) = (*((s8 *) (((char *) arg0) + 4)) = 6);
  *((s32 **) (((char *) arg0) + 0)) = &D_003403C0;
  return arg0;
}
}
