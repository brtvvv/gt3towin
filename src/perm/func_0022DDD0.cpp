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
extern s8 D_002EB39B __attribute__((section(".data")));
extern s32 D_00354660;
extern u8 D_004A0B7B __attribute__((section(".data")));
void func_0022DDD0(void)
{
  if (D_00354660 != 0)
  {
    D_004A0B7B = (u8) D_00354660;
    D_00354660 = 0;
    return;
  }
  D_002EB39B = 0;
}
}
