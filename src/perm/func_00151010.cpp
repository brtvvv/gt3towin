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
void func_00150F60(s32);
s32 func_0023D140(s32, s32);
void func_0023D1B8(s32, s32);
extern s32 D_0031F8B0 __attribute__((section(".data")));
extern s32 D_0031F8C8 __attribute__((section(".data")));
extern s32 D_0031F908 __attribute__((section(".data")));
extern s32 D_0031F960 __attribute__((section(".data")));
void func_00151010(void *arg0, s32 arg1)
{
  void *temp_a0;
  *((s32 **) (((char *) arg0) + 0x14)) = &D_0031F8B0;
  *((s32 **) (((char *) arg0) + 8)) = &D_0031F8C8;
  temp_a0 = arg0 + 0xC;
  *((s32 **) (((char *) temp_a0) + 8)) = &D_0031F908;
  func_0023D1B8((s32) temp_a0, 0);
  *((s32 **) (((char *) arg0) + 8)) = &D_0031F960;
  func_0023D140((s32) arg0, 0);
  if (arg1 & 1)
  {
    func_00150F60((s32) arg0);
  }
}
}
