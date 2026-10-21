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
void func_00282108(s32, s32, s32, s32);
void func_002822B0(s32);
void func_002822D0(void *arg0)
{
  s32 temp_s1;
  temp_s1 = arg0 + 0x1E4;
  *((void (**)(s32)) (((char *) arg0) + 0x3C)) = func_002822B0;
  *((s32 *) (((char *) arg0) + 0x38)) = 1;
  func_00282108(temp_s1, 4, 0, (s32) arg0);
  func_00282108((s32) (arg0 + 0x23C), 9, 1, (s32) arg0);
  func_00282108((s32) (arg0 + 0x294), 0xA, 2, (s32) arg0);
  *((s32 *) (((char *) arg0) + 0x1E0)) = temp_s1;
  *((s32 *) (((char *) arg0) + 0x1DC)) = 3;
  *((s32 *) (((char *) arg0) + 0x1D8)) = 0;
}
}
