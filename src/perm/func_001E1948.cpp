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
s32 func_0017A100(s32, s32, s32, s32);
void func_001E1948(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  void *temp_a1;
  void *temp_v0;
  func_0017A100((*((s32 *) (((char *) arg0) + 0))) + 0x84, 0xD, (s32) (*((u8 *) (((char *) arg0) + 0x136C))), 0);
  if (arg3 != 0)
  {
    temp_a1 = *((void **) (((char *) arg0) + 0xC));
    temp_v0 = (*((s32 *) (((char *) temp_a1) + 0x12C))) + (arg1 * 0x1B00);
    *((s32 *) (((char *) temp_v0) + 8)) = (s32) ((*((s32 *) (((char *) temp_a1) + 0xFC))) - (*((s32 *) (((char *) temp_v0) + 4))));
    *((s32 *) (((char *) temp_v0) + 0x10)) = arg2;
  }
}
}
