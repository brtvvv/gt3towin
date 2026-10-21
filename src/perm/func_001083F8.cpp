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
void func_00105238(s32);
void func_001083F8(s32 arg0, s32 arg1)
{
  s32 *temp_s0;
  s32 *temp_s1;
  s32 *temp_s2;
  s32 *temp_s3;
  s32 temp_a1;
  temp_a1 = arg1 ^ 2;
  temp_s2 = (temp_a1 != 0) ? (arg0 + 0x3B34) : (arg0 + 0x3B98);
  temp_s1 = (temp_a1 != 0) ? (arg0 + 0x3B38) : (arg0 + 0x3B9C);
  temp_s3 = (temp_a1 != 0) ? (arg0 + 0x3B2C) : (arg0 + 0x3B90);
  temp_s0 = (temp_a1 != 0) ? (arg0 + 0x3B30) : (arg0 + 0x3B94);
  func_00105238(*temp_s2);
  *temp_s2 = 0;
  func_00105238(*temp_s1);
  *temp_s1 = 0;
  func_00105238(*temp_s3);
  *temp_s3 = 0;
  func_00105238(*temp_s0);
  *temp_s0 = 0;
}
}
