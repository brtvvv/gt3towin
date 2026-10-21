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
s32 func_002147E8(s32 arg0, s32 arg1)
{
  int new_var;
  int new_var2;
  new_var2 = 1;
  new_var = arg0 + (arg1 * 0x10);
  return (*((s8 *) (((char *) new_var) + 0x30))) > (-new_var2);
}
}
