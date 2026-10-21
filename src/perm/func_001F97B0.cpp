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
s32 func_001F97B0(void *arg0, s32 arg1)
{
  s32 *new_var;
  new_var = (s32 *) (((char *) ((*((s32 *) (((char *) (*((void **) (((char *) arg0) + 8)))) + 4))) + (arg1 * 4))) + 8);
  return (*new_var) + 4;
}
}
