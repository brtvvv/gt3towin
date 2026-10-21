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
extern s32 D_002CF1D0 __attribute__((section(".data")));
inline char *inline_fn(char *arg0, int arg1)
{
  return arg0 + arg1;
}

void func_001CCF70(void *arg0, void *arg1)
{
  f32 temp_f2;
  f32 temp_f3;
  temp_f3 = ((f32) (*((s32 *) inline_fn((char *) (&D_002CF1D0), 0xC)))) / ((f32) (*((s32 *) inline_fn((char *) (&D_002CF1D0), 0x50))));
  temp_f2 = ((f32) (((*((s32 *) inline_fn((char *) (&D_002CF1D0), 8))) + 0x3F) & (~0x3F))) / ((f32) (*((s32 *) inline_fn((char *) (&D_002CF1D0), 0x4C))));
  *((f32 *) inline_fn((char *) arg1, 0)) = (f32) (temp_f2 * (*((f32 *) inline_fn((char *) arg0, 0x100))));
  *((f32 *) inline_fn((char *) arg1, 4)) = (f32) (temp_f3 * (*((f32 *) inline_fn((char *) arg0, 0x104))));
  *((f32 *) inline_fn((char *) arg1, 8)) = (f32) (temp_f2 * ((*((f32 *) inline_fn((char *) arg0, 0x100))) + (*((f32 *) inline_fn((char *) arg0, 0x108)))));
  *((f32 *) inline_fn((char *) arg1, 0xC)) = (f32) (temp_f3 * (*((f32 *) inline_fn((char *) arg0, 0x104))));
  *((f32 *) inline_fn((char *) arg1, 0x10)) = (f32) (temp_f2 * (*((f32 *) inline_fn((char *) arg0, 0x100))));
  *((f32 *) inline_fn((char *) arg1, 0x14)) = (f32) (temp_f3 * ((*((f32 *) inline_fn((char *) arg0, 0x104))) + (*((f32 *) inline_fn((char *) arg0, 0x10C)))));
  *((f32 *) inline_fn((char *) arg1, 0x18)) = (f32) (temp_f2 * ((*((f32 *) inline_fn((char *) arg0, 0x100))) + (*((f32 *) inline_fn((char *) arg0, 0x108)))));
  *((f32 *) inline_fn((char *) arg1, 0x1C)) = (f32) (temp_f3 * ((*((f32 *) inline_fn((char *) arg0, 0x104))) + (*((f32 *) inline_fn((char *) arg0, 0x10C)))));
}
}
