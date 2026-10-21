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
extern s32 D_00343038 __attribute__((section(".data")));
inline char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void *func_0022DA60(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 *new_var;
  s32 *new_var2;
  new_var2 = (s32 *) (inline_fn(arg0) + 0xC);
  new_var = &arg1;
  *((s32 *) (inline_fn(arg0) + 0)) = *new_var;
  *((s32 **) (inline_fn(arg0) + 0x18)) = &D_00343038;
  *((s32 *) (inline_fn(arg0) + 4)) = arg2;
  *((s32 *) (inline_fn(arg0) + 8)) = arg3;
  *new_var2 = 0;
  *((s32 *) (inline_fn(arg0) + 0x10)) = 0;
  *((s32 *) (inline_fn(arg0) + 0x14)) = 0;
  return arg0;
}
}
