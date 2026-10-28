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
typedef s32 (*VFNPTR)();
typedef struct VTE
{
  s16 d;
  s16 i;
  VFNPTR f;
} VTE;
extern s32 D_002F8870 __attribute__((section(".data")));
u16 func_0024C188(u32 arg0, s32 arg1)
{
  s32 *new_var;
  u8 temp_v1;
  void *temp_a0;
  if (arg0 < 0x10U)
  {
    new_var = &D_002F8870;
    temp_a0 = new_var;
    temp_a0 = (arg0 * 8) + temp_a0;
    temp_v1 = *((u8 *) (((char *) temp_a0) + 0));
    if ((arg1 >= ((s32) temp_v1)) && (((s32) (*((u8 *) (((char *) temp_a0) + 1)))) >= arg1))
    {
      return *((s32 *) (((arg1 - temp_v1) * 2) + (*((s32 *) (((char *) temp_a0) + 4)))));
    }
  }
  return 0xFFFFU;
}
}
