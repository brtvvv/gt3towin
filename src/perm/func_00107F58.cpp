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
void func_00107F58(s32 arg0, s32 arg1)
{
  s32 *temp_s0;
  s32 *temp_s1;
  s32 *temp_s2;
  s32 *temp_s3;
  s32 temp_a1;
  temp_a1 = arg1 ^ 2;
  temp_s2 = (temp_a1 != 0) ? (arg0 + 0x3B1C) : (arg0 + 0x3B80);
  temp_s1 = (temp_a1 != 0) ? (arg0 + 0x3B20) : (arg0 + 0x3B84);
  temp_s3 = (temp_a1 != 0) ? (arg0 + 0x3B24) : (arg0 + 0x3B88);
  temp_s0 = (temp_a1 != 0) ? (arg0 + 0x3B28) : (arg0 + 0x3B8C);
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
