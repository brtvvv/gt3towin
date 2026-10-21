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
s32 func_00115658(void *arg0)
{
  char *new_var;
  new_var = (char *) (arg0 + ((*((s32 *) (((char *) arg0) + 0xDC8))) * 4));
  return *((s32 *) (new_var + 0xDD4));
}
}
