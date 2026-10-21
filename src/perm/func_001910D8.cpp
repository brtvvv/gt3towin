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
s32 func_0017A100(s32, s32, s32, s32);
void func_001910D8(void *arg0, s32 arg1)
{
  int new_var;
  s32 new_var3;
  char *new_var2;
  s32 temp_s1;
  temp_s1 = (*((VTE **) (((char *) arg0) + 0x4)))[0 + 1].f(((char *) arg0) + (*((VTE **) (((char *) arg0) + 0x4)))[0 + 1].d);
  new_var2 = (char *) arg0;
  new_var = 0x4;
  new_var3 = (*((VTE **) (((char *) arg0) + new_var)))[1 + 1].f(new_var2 + (*((VTE **) (((char *) arg0) + 0x4)))[1 + 1].d);
  func_0017A100(arg1 + 0x84, temp_s1, new_var3, 2);
}
}
