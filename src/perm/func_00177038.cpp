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
void func_001B2BF0(s32, s32);
void func_0027D2F8(s32);
extern s32 D_00327800 __attribute__((section(".data")));
void func_00177038(void *arg0, s32 arg1)
{
  func_001B2BF0(arg0 + 0xC, 2);
  *((s32 **) (((char *) arg0) + 8)) = &D_00327800;
  if (arg1 & 1)
  {
    func_0027D2F8((s32) arg0);
  }
}
}
