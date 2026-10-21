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
void func_0025E6D8(s32, s32, s32);
void func_0023F2E8(void *arg0)
{
  int new_var;
  if (1)
  {
    new_var = *((s32 *) (((char *) arg0) + 0x3040));
  }
  func_0025E6D8(*((s32 *) (((char *) arg0) + 0x3038)), *((s32 *) (((char *) arg0) + 0x303C)), new_var);
  *((s32 *) (((char *) arg0) + 0x300C)) = (s32) (*((s32 *) (((char *) arg0) + 0x303C)));
}
}
