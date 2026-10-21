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
void func_001BAB98(s32, s32);
void func_001C0360(s32);
s32 func_0026BFC0(s32, s32);
extern s32 D_003388C0 __attribute__((section(".data")));
void func_001CCE50(void *arg0, s32 arg1)
{
  s32 temp_s1;
  temp_s1 = *((s32 *) (((char *) arg0) + 0x114));
  *((s32 **) (((char *) arg0) + 0x1C)) = &D_003388C0;
  if (temp_s1 != 0)
  {
    *((s32 *) (((char *) arg0) + 0x114)) = 0;
    func_0026BFC0(func_001B4820(), temp_s1);
  }
  func_001BAB98((s32) arg0, 0);
  if (arg1 & 1)
  {
    func_001C0360((s32) arg0);
  }
}
}
