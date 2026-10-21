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
s32 func_00219680(void);
inline char *inline_fn(s32 arg0)
{
  return (char *) (arg0 + 0x2FF38);
}

f32 func_0017EAF8(void *arg0)
{
  f32 var_f0;
  s32 temp_v1;
  s32 var_v0;
  temp_v1 = *((s32 *) (((char *) (*((void **) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x3C)))) + 0x9784));
  if ((temp_v1 == 0) || (temp_v1 == 3))
  {
    var_v0 = *((s32 *) (inline_fn(func_00219680()) + 0xC));
  }
  else
  {
    var_v0 = *((s32 *) (inline_fn(func_00219680()) + 0x54));
  }
  var_f0 = 0.0f;
  if (var_v0 != 0)
  {
    var_f0 = *((f32 *) (((char *) arg0) + 0x190));
  }
  return var_f0;
}
}
