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
extern volatile short D_002F8900 __attribute__((section(".data")));
inline char *inline_fn()
{
  return (char *) (&D_002F8900);
}

void func_0024AEF0(s32 arg0, s32 arg1, s32 arg2)
{
  s32 new_var2;
  char *new_var;
  new_var2 = arg2;
  new_var = inline_fn() + 0xD0;
  *((s32 *) new_var) = arg0;
  *((s32 *) (((char *) (&D_002F8900)) + 0xD4)) = arg1;
  *((s32 *) (inline_fn() + 0xD8)) = new_var2;
}
}
