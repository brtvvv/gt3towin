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
inline s32 *inline_fn(char *arg0)
{
  return (s32 *) arg0;
}

void func_001C3400(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  char *new_var2;
  char *new_var;
  new_var = ((char *) arg0) + 0x80;
 do { *((s32 *) new_var) = arg3; new_var2 = ((char *) arg0) + 0x78; } while (0);
  *inline_fn(new_var2) = arg1;
  *((s32 *) (((char *) arg0) + 0x7C)) = arg2;
}
}
