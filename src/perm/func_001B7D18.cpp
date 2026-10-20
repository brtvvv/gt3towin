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
s32 func_001B75E8(s32, s32, s32);
s32 func_001B8610(s32);
s32 func_001C8000(s32);
s32 func_001C8040(s32);
void func_001B7D18(void *arg0)
{
  char *new_var;
  s32 temp_s0;
  s32 temp_s2;
  s32 temp_v1;
  void *temp_v1_2;
  temp_s0 = arg0 + 0x1E4;
  temp_s2 = func_001C8040(temp_s0);
  func_001C8000(temp_s0);
  if (temp_s2 != 0)
  {
    *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x1DC)))) + 0x54)) = 0;
    func_001B8610((s32) arg0);
    temp_v1 = (*((s32 *) (((char *) arg0) - -0xAE4))) - 1;
    temp_s0 = 4;
    *((s32 *) (((char *) arg0) + 0xAE4)) = temp_v1;
    *((s32 *) (((char *) (*((void **) (new_var = ((char *) arg0) + 0xAE0)))) + 0x20)) = 0;
    temp_v1_2 = *((void **) (((char *) (arg0 + (temp_v1 * temp_s0))) + 0xAF0));
    if (temp_v1_2 != 0)
    {
      *((s32 *) (((char *) temp_v1_2) + 0xEC)) = 1;
    }
    func_001B75E8((s32) arg0, temp_s2, 0);
  }
}
}
