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
f32 func_001EC790(void *arg0, s32 arg1, f32 fparg0)
{
  f32 *new_var2;
  f32 temp_f12;
  void *new_var3;
  void *new_var;
  new_var2 = (f32 *) (((char *) arg0) + 0xEC4);
  temp_f12 = fparg0 + (*new_var2);
  new_var3 = arg0 + (arg1 * 4);
  new_var = (arg1 * 0xA4) + arg0;
  return ((*((f32 *) (((char *) new_var3) + 0x1614))) * temp_f12) + ((*((f32 *) (((char *) new_var) + 0x101C))) * (1.0f - temp_f12));
}
}
