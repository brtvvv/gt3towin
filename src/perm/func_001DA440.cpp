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
f32 func_001DA440(s32 arg0, s32 arg1)
{
  void *temp_a0;
  int new_var;
  new_var = 0x69C;
  temp_a0 = arg0 + (((0, (arg1 >> 1) * 0x44)) + new_var);
  return (*((f32 *) (((char *) temp_a0) + 4))) - (*((f32 *) (((char *) temp_a0) + 0x10)));
}
}
