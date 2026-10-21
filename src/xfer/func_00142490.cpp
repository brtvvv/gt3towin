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
s32 func_00142470(s32, s32);
void *func_00142490(void *arg0, void *arg1)
{
  s32 new_var;
  s32 new_var2;
  int new_var3;
  new_var2 = *((s32 *) (((char *) arg1) + 0xEC0));
  new_var = new_var2;
  new_var3 = 1;
  if (new_var3)
  {
    if (1)
    {
    }
    *((s32 *) (((char *) arg0) + 0)) = -0x10;
    *((s32 *) (((char *) arg0) + 4)) = 0x11;
    *((s32 *) (((char *) arg0) + 0xC)) = 1;
  }
  *((s32 *) (((char *) arg0) - -8)) = (s32) new_var;
  *((s32 (**)(s32, s32)) (((char *) arg0) + 0x10)) = func_00142470;
  *((s32 *) (((char *) arg0) + 0x14)) = new_var3;
  *((s32 *) (((char *) arg0) + 0x18)) = 0;
  *((s32 *) (((char *) arg0) + 0x1C)) = 0;
  return arg0;
}
}
