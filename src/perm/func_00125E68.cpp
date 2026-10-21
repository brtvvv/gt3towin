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
s32 func_00218FC0(s32, s32);
s32 func_00219680(void);
s32 func_0021A480(s32, s32);
void func_00125E68(void *arg0)
{
  s32 temp_s0;
  void **new_var;
  s32 temp_s2;
  new_var = (void **) (((char *) (arg0 + ((*((s32 *) (((char *) arg0) + 0xDC8))) * 4))) + 0xDD4);
  temp_s2 = (*((VTE **) (((char *) (*new_var)) + 0x1C)))[10 + 1].f(((char *) (*new_var)) + (*((VTE **) (((char *) (*new_var)) + 0x1C)))[10 + 1].d);
  temp_s0 = func_0021A480(func_00219680(), temp_s2);
  func_00218FC0((  {
    s32 _g = func_00219680() + 0x307C8;
    _g;
  }
), temp_s0);
  *((s32 *) (((char *) ((  {
    s32 _g = func_00219680() + 0x307C8;
    _g;
  }
))) + 0x58C)) = temp_s2;
}
}
