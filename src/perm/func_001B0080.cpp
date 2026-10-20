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
s32 func_001AFD78(s32);
s32 func_00219680(void);
inline s32 *inline_fn(void *arg0, int arg1)
{
  return (s32 *) (((char *) (arg0 + arg1)) + 0xD4);
}

void func_001B0080(void *arg0)
{
  s32 temp_v0;
  void *temp_a1;
  temp_a1 = func_00219680() + 0x2FF38;
  temp_v0 = *((s32 *) (((char *) temp_a1) + 0xD0));
  *((s32 *) (((char *) arg0) + 0x1F8)) = temp_v0;
  if (temp_v0 >= 4)
  {
    *((s32 *) (((char *) arg0) + 0x1F8)) = 0;
  }
  *((s32 *) (((char *) arg0) + 0x1FC)) = (s32) (*inline_fn(temp_a1, (*((s32 *) (((char *) arg0) + 0x1F8))) * 4));
  if ((*((s32 *) (((char *) arg0) + 0x30))) != 0)
  {
    *((s32 *) (((char *) arg0) + 0x20C)) = (s32) ((*((s32 *) (((char *) temp_a1) + 0x50))) != 0);
  }
  else
  {
    *((s32 *) (((char *) arg0) + 0x20C)) = 0;
  }
  *((s32 *) (((char *) arg0) + 0x1F4)) = 0;
  *((s32 *) (((char *) arg0) + 0x210)) = 0;
  *((s32 *) (((char *) arg0) + 0x1F0)) = 1;
  func_001AFD78((s32) arg0);
}
}
