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
void func_001BC7B0(s32);
void func_001C0360(s32);
s32 func_001C0DC8(s32, s32);
s32 func_0023D1B8(s32, s32);
extern s32 D_00335B88 __attribute__((section(".data")));
extern s32 D_00335BD0 __attribute__((section(".data")));
void func_001BC500(void *arg0, s32 arg1)
{
  void *temp_v1;
  *((s32 **) (((char *) arg0) + 0x1C)) = &D_00335B88;
  func_001BC7B0((s32) arg0);
  temp_v1 = arg0 + 0xB0;
  *((s32 **) (((char *) temp_v1) + 8)) = &D_00335BD0;
  func_0023D1B8((s32) temp_v1, 2);
  func_001C0DC8((s32) arg0, 0);
  if (arg1 & 1)
  {
    func_001C0360((s32) arg0);
  }
}
}
