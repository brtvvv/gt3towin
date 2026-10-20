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
s32 func_001B8610(s32);
s32 func_001C7F80(s32, s32);
void func_001B79F8(void *arg0, s32 arg1)
{
  s32 temp_a0;
  void *temp_v0;
  if ((*((s32 *) (((char *) arg0) + 0xAE4))) > 0)
  {
    func_001B8610((s32) arg0);
    return;
  }
  func_001C7F80((s32) (arg0 + 0x1E4), (s32) (arg0 + 0xA20));
  temp_a0 = *((s32 *) (((char *) arg0) + 0xAE4));
  *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x1DC)))) + 0x54)) = arg1;
  temp_v0 = *((void **) (((char *) (arg0 - (-(temp_a0 * 4)))) + 0xAF0));
  if (temp_v0 != 0)
  {
    *((s32 *) (((char *) temp_v0) + 0xEC)) = 0;
  }
  *((s32 *) (((char *) arg0) + 0xAE4)) = (s32) (temp_a0 + 1);
}
}
