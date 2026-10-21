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
s32 func_001B1628(s32, s32, s32, s32);
void func_001B18E8(s32, s32, s32, s32);
void func_001B1968(s32, s32);
extern s32 D_00333620 __attribute__((section(".data")));
extern s32 D_00333630 __attribute__((section(".data")));
extern s32 D_00333640 __attribute__((section(".data")));
extern s32 D_00333650 __attribute__((section(".data")));
void func_001B21F8(s32 arg0, s32 arg1)
{
  s32 temp_a1;
  s32 temp_v0;
  func_001B18E8(arg0, arg1, (s32) (&D_00333620), 0);
  *((s32 *) (((char *) arg0) + 0x3C)) = func_001B1628(arg0, arg1, (s32) (&D_00333630), 1);
  *((s32 *) (((char *) arg0) + 0x40)) = func_001B1628(arg0, arg1, (s32) (&D_00333640), 1);
  temp_v0 = func_001B1628(arg0, arg1, (s32) (&D_00333650), 1);
  temp_a1 = *((s32 *) (((char *) arg0) + 0x3C));
  *((s32 *) (((char *) (*((s32 *) (((char *) arg0) + 0x40)))) + 0xAC)) = (*((s32 *) (((char *) temp_a1) + 0xAC)) = 0);
  *((s32 *) (((char *) arg0) + 0x44)) = temp_v0;
  *((s32 *) (((char *) temp_v0) + 0xAC)) = 0;
  func_001B1968(arg0, temp_a1);
}
}
