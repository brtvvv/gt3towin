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
s32 func_001BB688(s32);
inline char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void func_001C5F80(void *arg0)
{
  if (!((*((s32 *) (inline_fn(arg0) + 0x10C))) == 0))
  {
    if ((*((s32 *) (inline_fn(arg0) + 0x108))) != 0)
    {
      func_001BB688((s32) arg0);
    }
  }
  else
    if ((*((s32 (**)(s32)) (inline_fn(arg0) + 0x100)))(*((s32 *) (inline_fn(arg0) + 0x104))) != 0)
  {
    func_001BB688((s32) arg0);
  }
}
}
