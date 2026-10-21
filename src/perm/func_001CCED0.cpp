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
s32 func_001B4820(void);
s32 func_001CD5C0(s32, s32);
s32 func_0026BCA0(s32, s32, s32);
s32 func_0026BFC0(s32, s32);
void func_001CCED0(void *arg0, void *arg1)
{
  s32 temp_s0;
  s32 temp_v0;
  temp_s0 = *((s32 *) (((char *) arg0) + 0x114));
  if (temp_s0 != 0)
  {
    *((s32 *) (((char *) arg0) + 0x114)) = 0;
    func_0026BFC0(func_001B4820(), temp_s0);
  }
  if (arg1 == 0)
  {
    *((s32 *) (((char *) arg0) + 0x114)) = 0;
    return;
  }
  temp_v0 = func_0026BCA0(func_001B4820(), *((s32 *) (((char *) arg1) + 8)), 0x40);
  func_001CD5C0((s32) arg1, temp_v0);
  *((s32 *) (((char *) arg0) + 0x118)) = (s32) (*((s32 *) (((char *) arg1) + 0xC)));
  *((s32 *) (((char *) arg0) + 0x114)) = temp_v0;
  *((s32 *) (((char *) arg0) + 0x11C)) = (s32) (*((s32 *) (((char *) arg1) + 0x10)));
}
}
