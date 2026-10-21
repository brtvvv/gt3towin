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
s32 func_001ED458(s32, s32, s32, s32, s32, s32, s32);
s32 func_001F0538(s32, s32, s32);
s32 func_001F3A90(s32, s32);
void func_001F1E00(s32 arg0, s32 arg1, s32 arg2, s32 unused3, s32 arg4, s32 arg5)
{
  s32 temp_s2;
  int new_var;
  temp_s2 = func_001F3A90(arg0, arg1);
  new_var = arg0 + 0xE340;
  if ((*((u8 *) (((char *) new_var) + 2))) == 3)
  {
    if ((*((VTE **) (((char *) arg0) + 0xE3A8)))[29 + 1].f(((char *) arg0) + (*((VTE **) (((char *) arg0) + 0xE3A8)))[29 + 1].d) == arg2)
    {
      func_001F0538(arg0, temp_s2, arg5);
      return;
    }
  }
  func_001ED458(arg0, arg1, arg2, (arg2 * (*((VTE **) (((char *) arg0) + 0xE3A8)))[32 + 1].f(((char *) arg0) + (*((VTE **) (((char *) arg0) + 0xE3A8)))[32 + 1].d)) - 1, arg4, arg5, (s32) (*((u8 *) (((char *) temp_s2) + 0x14A2))));
}
}
