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
s32 func_001D6130(s32, s32);
extern s32 D_0033A190 __attribute__((section(".data")));
s32 func_001D61C0(s32 arg0, s32 arg1)
{
  func_001D6130(arg0, arg1);
  *((s32 *) (((char *) arg0) + 0x1F4)) = (*((s32 *) (((char *) arg0) + 0x1F0)) = 1);
  *((s32 **) (((char *) arg0) + 0x1C)) = &D_0033A190;
  return arg0;
}
}
