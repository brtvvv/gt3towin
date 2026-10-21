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
f32 func_001FAD58(void *arg0, s32 arg1)
{
  char *new_var;
  new_var = (char *) ((*((s32 *) (((char *) (*((void **) (((char *) arg0) + 4)))) + 0x18))) + (arg1 * 0x28));
  return *((f32 *) (new_var + 0x28));
}
}
