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
s32 func_00212520(s32 arg0, s32 arg1)
{
  int new_var2;
  s32 temp_v0;
  int new_var;
  new_var = 0x100;
  new_var2 = 0xFF;
  temp_v0 = ((new_var2 - arg0) - arg1) * 2;
  return (temp_v0 >= new_var) ? (0x100) : (temp_v0);
}
}
