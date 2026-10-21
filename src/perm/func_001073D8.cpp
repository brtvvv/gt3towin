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
void func_001073D8(s32 arg0, s32 arg1)
{
  s32 *temp_s0;
  int new_var;
  s32 *temp_s1;
  s32 *temp_s2;
  s32 temp_a1;
  temp_a1 = arg1 ^ 2;
  temp_s2 = (temp_a1 != 0) ? (arg0 + 0x3A48) : (arg0 + 0x3B50);
  new_var = (temp_a1 != 0) ? (arg0 + 0x3AD8) : (arg0 + 0x3B44);
  temp_s0 = (temp_a1 != 0) ? (arg0 + 0x3ADC) : (arg0 + 0x3B48);
  temp_s1 = new_var;
  func_00105238(*temp_s2);
  *temp_s2 = 0;
  func_00105238(*temp_s1);
  *temp_s1 = 0;
  func_00105238(*temp_s0);
  *temp_s0 = 0;
}
}
