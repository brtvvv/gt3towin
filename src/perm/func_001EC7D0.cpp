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
f32 func_001EC7D0(void *arg0, s32 arg1, f32 fparg0)
{
  char *new_var;
  f32 temp_f12;
  temp_f12 = fparg0 + (*((f32 *) (((char *) arg0) + 0xEC4)));
  new_var = (char *) (arg0 + (arg1 * 4));
  return ((*((f32 *) (new_var + 0x1634))) * temp_f12) + ((*((f32 *) (((char *) ((arg1 * 0x34) + arg0)) + 0x14D0))) * (1.0f - temp_f12));
}
}
