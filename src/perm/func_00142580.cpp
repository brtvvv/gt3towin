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
s32 func_00142570(s32, s32);
inline s32 *inline_fn(void *arg0)
{
  return (s32 *) (((char *) arg0) + 0x18);
}

void *func_00142580(void *arg0, void *arg1)
{
  int new_var;
  s32 new_var2;
  new_var2 = (s32) (*((s32 *) (((char *) arg1) + 0xE8C)));
  *((s32 *) (((char *) arg0) + 0)) = -0x96;
  *((s32 *) (((char *) arg0) + 4)) = 0x97;
  *((s32 *) (((char *) arg0) + 8)) = new_var2;
  *((s32 *) (((char *) arg0) + 0xC)) = 5;
  *((s32 (**)(s32, s32)) (((char *) arg0) + 0x10)) = func_00142570;
  *((s32 *) (((char *) arg0) + 0x14)) = 1;
  new_var = 0;
  *inline_fn(arg0) = 0;
  *((s32 *) (((char *) arg0) + 0x1C)) = new_var;
  return arg0;
}
}
