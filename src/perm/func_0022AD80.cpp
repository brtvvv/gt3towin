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
void func_0022AEF8(s32);
void func_0027D2F8(s32);
extern s32 D_00342D78 __attribute__((section(".data")));
extern s32 D_00342DA0 __attribute__((section(".data")));
void func_0022AD80(void *arg0, s32 arg1)
{
  *((s32 **) (((char *) arg0) + 0x90)) = &D_00342D78;
  func_0022AEF8((s32) arg0);
  *((s32 **) (((char *) arg0) + 0x88)) = &D_00342DA0;
  if (arg1 & 1)
  {
    func_0027D2F8((s32) arg0);
  }
}
}
