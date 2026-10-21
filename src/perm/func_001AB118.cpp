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
void func_00220550(s32);
inline char *inline_fn(char *arg0)
{
  return arg0 + 0x6B8;
}

void func_001AB118(void *arg0, s32 arg1)
{
  if (arg1 != 0)
  {
    func_00220550(arg1);
    *((s32 *) inline_fn((char *) arg0)) = 1;
  }
}
}
