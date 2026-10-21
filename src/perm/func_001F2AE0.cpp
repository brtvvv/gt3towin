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
s32 func_001EBBF8(s32, s32);
void func_001F2AE0(void **arg0, s32 arg1)
{
  u8 temp_v0;
  void *temp_a0;
  void *temp_v1;
  temp_a0 = *arg0;
  if ((*((s32 *) (((char *) (*arg0)) + 0x6C))) == 0)
  {
    temp_v1 = arg1 + 0xF84;
    if ((*((u8 *) (((char *) temp_v1) + 0x4E0))) == 0)
    {
      ;
      if ((*((u8 *) (((char *) temp_v1) + 0x3E8))) == 0)
      {
        func_0017A100((s32) (temp_a0 + 0x84), 0xA, (s32) (*((u8 *) (((char *) temp_v1) + 0x3E8))), 0);
      }
      func_001EBBF8(arg1, 2);
    }
  }
}
}
