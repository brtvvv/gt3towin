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
void func_0022CF20(s32, s32);
s32 func_0022CF78(s32 arg0, s32 *arg1)
{
  s32 new_var;
  func_0022CF20(arg0, 0);
  new_var = *arg1;
  *((s8 *) (((char *) arg0) + 4)) = -1;
  *((s32 *) (((char *) arg0) + 0)) = (s32) ((unsigned long long) new_var);
  return arg0;
}
}
