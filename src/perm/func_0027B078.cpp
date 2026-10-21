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
s32 func_002789E8(void);
s32 func_0027AFC0(s32);
s32 func_0027B008(s32, s32, s32);
inline char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void func_0027B078(s32 arg0, s32 arg1, s32 arg2)
{
  char *new_var2;
  char *new_var;
  void **temp_v0_2;
  void *temp_v0;
  temp_v0 = func_0027AFC0(0x30);
  *((s32 *) (((char *) temp_v0) + 0xC)) = arg1;
  *((s32 *) (((char *) temp_v0) + 0x10)) = arg2;
  *((s32 *) (((char *) temp_v0) + 8)) = arg0;
  new_var = inline_fn(temp_v0);
  *((s64 *) (inline_fn(temp_v0) + 0x20)) = 0;
  *((s32 *) (inline_fn(temp_v0) + 0x28)) = arg0;
  *((s32 *) (inline_fn(temp_v0) + 0x14)) = 0;
  *((s32 (**)(s32, s32, s32)) (new_var2 = inline_fn(temp_v0) + 0)) = func_0027B008;
  *((s16 *) (((char *) temp_v0) + 4)) = 4;
  *((s16 *) (new_var + 6)) = 1;
  temp_v0_2 = func_002789E8();
  *((void **) (inline_fn(temp_v0) + 0x18)) = (void *) (*temp_v0_2);
  *temp_v0_2 = temp_v0;
}
}
