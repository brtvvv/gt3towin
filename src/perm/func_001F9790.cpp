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
s32 func_001F9790(void *arg0, s32 arg1)
{
  char *new_var2;
  s32 *new_var;
  new_var2 = ((char *) ((*((s32 *) (((char *) (*((void **) (((char *) arg0) + 8)))) + 4))) + ((2 * arg1) * 2))) + 8;
  new_var = *((s32 **) new_var2);
  return *new_var;
  if (1)
  {
  }
}
}
