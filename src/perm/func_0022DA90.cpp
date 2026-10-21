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
inline s32 *inline_fn(void *arg0)
{
  return (s32 *) (((char *) arg0) + 0);
}

s32 func_0022DA90(void *arg0)
{
  char *new_var;
  char *new_var2;
  s32 temp_v0;
  temp_v0 = *inline_fn(arg0);
  new_var = ((char *) arg0) + 0xC;
 do { *((s32 *) new_var) = 0; *inline_fn(arg0) = 0; *((s32 *) (((char *) arg0) + 4)) = 0; new_var2 = (char *) arg0; } while (0);
  *((s32 *) (new_var2 + 8)) = 0;
  return temp_v0;
}
}
