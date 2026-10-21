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
s32 func_001C5450(void);
s32 func_0026D950(s32, ...);
extern s32 D_00352BD8 __attribute__((section(".data")));
void func_00122BD0(s32 unused0, s32 arg1)
{
  s16 *new_var;
  new_var = (s16 *) (((char *) func_001C5450()) + 0x26);
  func_0026D950(arg1, &D_00352BD8, *new_var);
}
}
