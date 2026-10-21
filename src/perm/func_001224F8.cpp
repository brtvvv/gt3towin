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
s32 func_00219680(void);
s32 func_00236618(s32);
s32 func_0026D950(s32, ...);
extern s32 D_00352BD0 __attribute__((section(".data")));
void func_001224F8(s32 unused0, s32 arg1)
{
  s32 new_var;
  new_var = *((s32 *) (((char *) ((  {
    s32 _g = func_00219680() + 0x307C8;
    _g;
  }
))) + 0x538));
  func_0026D950(arg1, &D_00352BD0, func_00236618(new_var + 0x10));
}
}
