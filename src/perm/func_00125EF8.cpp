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
s32 func_00102130(s32);
s32 func_00102138(void);
s32 func_00218FC0(s32, s32);
s32 func_00219680(void);
s32 func_0021A480(s32, s32);
void func_00125EF8(void *arg0)
{
  s32 temp_s0_2;
  char *new_var2;
  void **new_var;
  new_var2 = (char *) (*(new_var = (void **) (((char *) (arg0 + ((*((s32 *) (((char *) arg0) + 0xDC8))) * 4))) + 0xDD4)));
  temp_s0_2 = (*((VTE **) ((*((void **) (((char *) (arg0 + ((*((s32 *) (((char *) arg0) + 0xDC8))) * 4))) + 0xDD4))) + 0x1C)))[10 + 1].f(new_var2 + (*((VTE **) (((char *) (*new_var)) + 0x1C)))[10 + 1].d);
  temp_s0_2 = func_0021A480(func_00102130(func_00102138()), temp_s0_2);
  func_00218FC0((  {
    s32 _g = func_00219680() + 0x307C8;
    _g;
  }
), temp_s0_2);
}
}
