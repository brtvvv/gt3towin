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
inline char *inline_fn(char *arg0)
{
  return arg0;
}

u32 func_0017C040(void *arg0, int arg1)
{
  int new_var;
  s32 var_a1;
  u32 *temp_v0;
  u32 temp_v1;
  s32 var_a3;
  u32 var_a2;
  new_var = 0x14;
  var_a1 = arg1;
  var_a2 = 0xFFFFFFFF;
  if (var_a1 >= 0)
  {
    if (var_a1 >= (*((s32 *) inline_fn(((char *) arg0) + 0xC))))
    {
      goto block_4;
    }
  }
  else
  {
    block_4:
    var_a1 = (*((s32 *) (((char *) arg0) + 0xC))) - 1;

  }
  var_a3 = 0;
  if (var_a1 >= 0)
  {
    do
    {
      temp_v0 = (arg0 + new_var) + (var_a3 * 4);
      var_a3 = var_a3 + 1;
      temp_v1 = *temp_v0;
      var_a2 = (temp_v1 < var_a2) ? (temp_v1) : (var_a2);
    }
    while (var_a3 <= var_a1);
  }
  return var_a2;
}
}
