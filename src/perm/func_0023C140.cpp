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
s32 func_00238A40(s32, s32);
void *func_0023C140(void *arg0, void *arg1)
{
  s32 new_var;
  func_00238A40(arg0 + 0x10, arg1 + 0x10);
  new_var = (s32) (*((s32 *) (((char *) arg1) + 0x228)));
  *((s32 *) (((char *) arg0) + 0x22C)) = (s32) (*((s32 *) (((char *) arg1) + 0x22C)));
  *((s32 *) (((char *) arg0) + 0x228)) = new_var;
  return arg0;
}
}
