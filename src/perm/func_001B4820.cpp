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
extern s32 D_00353EA8;
extern char D_0049E1B0 __attribute__((section(".data")));
void *func_001B4820(void)
{
  s32 new_var2;
  int new_var;
  new_var2 = D_00353EA8;
  new_var = 0x18;
  if (1)
  {
  }
  return (new_var2 * new_var) + (&D_0049E1B0);
}
}
