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
inline f32 inline_fn(void *arg0)
{
  return *((f32 *) (((char *) arg0) + 0x18));
}

s32 func_0019AB38(void *arg0)
{
  s32 var_v0;
  var_v0 = 1;
  if (!((*((f32 *) (((char *) arg0) + 0x1C))) <= inline_fn(arg0)))
  {
    var_v0 = 0;
  }
  return var_v0;
}
}
