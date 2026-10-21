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
s32 func_001B7240(s32, s32, s32);
s32 func_001B7478(s32, s32);
extern s32 D_0029D680 __attribute__((section(".data")));
void func_0012CA80(s32 arg0, s32 arg1)
{
  s32 temp_s0;
  temp_s0 = arg0 + 0x2F0;
  func_001B7240(temp_s0, arg0 + 0x294, 0);
  func_001B7478(temp_s0, arg1);
  *((s32 **) (((char *) temp_s0) + 0xB00)) = &D_0029D680;
  *((s32 *) (((char *) temp_s0) + 0xB04)) = 1;
  *((s32 *) (((char *) temp_s0) + 0xB08)) = arg0;
}
}
