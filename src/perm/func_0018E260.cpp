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
s32 func_0018E2E0(s32, s32);
inline int inline_fn(int arg0)
{
  return arg0 + 0x518;
}

void func_0018E260(void *arg0, void *arg1)
{
  s32 *new_var;
  s32 new_var2;
  func_0018E2E0(new_var2 = (s32) arg1, (*(new_var = &(*((s32 *) (((char *) arg0) + 0x58))))) + inline_fn((*((s32 *) (((char *) arg1) + 0x14))) * 0x280));
}
}
