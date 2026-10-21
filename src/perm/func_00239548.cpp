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
s64 func_00239548(void *arg0, s32 arg1)
{
  s64 *new_var;
  new_var = (s64 *) (((char *) ((*((s32 *) (((char *) arg0) + 0x18))) + (arg1 * 8))) + 0x10);
  return *new_var;
}
}
