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
void func_0023D558(s32 **arg0, s32 arg1)
{
  s32 *var_v0;
  s32 var_v1;
  if (var_v0 || arg1)
  {
    var_v0 = *arg0;
    var_v1 = 0;
  }
  else
  {
    var_v0 = *arg0;
    var_v1 = 0;
  }
  if ((var_v0 != 0) && (arg1 != 0))
  {
    loop_2:
    var_v0 = *var_v0;

    var_v1 += 1;
    if (var_v0 != 0)
    {
      if (var_v1 != arg1)
      {
        goto loop_2;
      }
    }
  }
}
}
