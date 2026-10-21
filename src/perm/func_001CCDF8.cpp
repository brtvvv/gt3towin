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
s32 func_001BA8A0(s32, s32, s32);
extern s32 D_003388C0 __attribute__((section(".data")));
s32 func_001CCDF8(s32 arg0, s32 arg1, s32 arg2)
{
  func_001BA8A0(arg0, arg1, arg2);
  *((s32 **) (((char *) arg0) + 0x1C)) = &D_003388C0;
  *((s32 *) (((char *) arg0) + 0x100)) = 0;
  *((s32 *) (((char *) arg0) + 0x104)) = 0;
  *((f32 *) (((char *) arg0) + 0x108)) = 1.0f;
  *((s32 *) (((char *) arg0) + 0x110)) = 0;
  *((s32 *) (((char *) arg0) + 0x114)) = 0;
  *((f32 *) (((char *) arg0) + 0x10C)) = 1.0f;
  return arg0;
}
}
