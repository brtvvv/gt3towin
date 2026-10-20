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
f32 func_001DA468(s32 arg0, s32 arg1)
{
  int new_var;
  void *temp_a0;
  new_var = ((arg1 >> 1) * 0x44) + 0x69C;
  temp_a0 = arg0 + new_var;
  return (*((f32 *) (((char *) temp_a0) + 8))) - (*((f32 *) (((char *) temp_a0) + 0x10)));
}
}
