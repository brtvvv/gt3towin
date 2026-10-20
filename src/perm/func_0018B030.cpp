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
s32 func_0018B008(s32, s32);
extern unsigned char D_002BAC98 __attribute__((section(".data")));
extern s32 D_003538A0;
s32 func_0018B030(u32 arg0)
{
  if (arg0 >= 3U)
  {
    return D_003538A0;
  }
  return func_0018B008((s32) ((arg0 * 8) + (&D_002BAC98)), 1);
}
}
