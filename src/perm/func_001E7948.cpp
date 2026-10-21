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
f32 func_001E7948(s32 arg0, s32 arg1, f32 fparg0)
{
  char *new_var2;
  f32 temp_f0;
  char *new_var;
  f32 temp_f1;
  new_var2 = (new_var = (char *) (arg0 + (arg1 * 4)));
  temp_f1 = *((f32 *) (((char *) ((arg1 * 0xA4) + arg0)) + 0x1078));
  temp_f0 = (((*((f32 *) (new_var2 + 0x1624))) - temp_f1) * fparg0) + temp_f1;
  return temp_f0 * temp_f0;
}
}
