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
int func_0022AD00(s32);
extern s32 D_0032DF68 __attribute__((section(".data")));
s32 func_0018B110(unsigned int arg0)
{
  func_0022AD00(arg0);
  if (1)
  {
    *((s32 **) (((char *) arg0) + 0x90)) = &D_0032DF68;
    *((s32 *) (((char *) arg0) + 0x94)) = -1;
    *((s32 *) (((char *) arg0) + 0x98)) = -1;
    return arg0;
  }
}
}
