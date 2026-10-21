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
extern s32 D_003007D0 __attribute__((section(".data")));
extern s32 D_00354ACC;
extern s32 D_00354AD0;
extern s32 D_00354AF8;
inline char *inline_fn()
{
  return (char *) (&D_003007D0);
}

void func_00261E78(s32 arg0)
{
  char *new_var;
  if (arg0 != 0)
  {
    if (D_00354AF8 == 3)
    {
      (*((s32 (**)(s32, s32)) (inline_fn() + 0x18)))(*((s32 *) (inline_fn() + 0x1C)), D_00354AD0);
      return;
    }
    (*((s32 (**)(s32, s32)) ((new_var = inline_fn()) + 0x18)))(*((s32 *) (new_var + 0x1C)), D_00354ACC);
  }
}
}
