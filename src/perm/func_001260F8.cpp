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
s32 func_00219680(void);
void func_001260F8(void *arg0)
{
  char *new_var;
  s32 temp_s0;
  new_var = (char *) (arg0 + ((*((s32 *) (((char *) arg0) + 0xDC8))) * 4));
  temp_s0 = (*((VTE **) (((char *) (*((void **) (new_var + 0xDD4)))) + 0x1C)))[10 + 1].f(((char *) (*((void **) (new_var + 0xDD4)))) + (*((VTE **) (((char *) (*((void **) (new_var + 0xDD4)))) + 0x1C)))[10 + 1].d);
  *((s32 *) (((char *) ((  {
    s32 _g = func_00219680() + 0x307C8;
    _g;
  }
))) + 0x590)) = temp_s0;
}
}
