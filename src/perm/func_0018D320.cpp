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
s32 func_0017A100(s32, s32, s32, s32);
void func_0018CEA0(s32, s32, s32);
void func_0018D320(s32 arg0, s32 arg1)
{
  func_0018CEA0(arg0, (float) 0, 0);
  *((s8 *) (((char *) arg0) + 0xA691)) = 0;
  func_0017A100(0x84 + arg1, 1, 0, 0);
}
}
