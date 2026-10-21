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
s32 func_0026ACA0(s32);
s32 func_0027FC78(s32, s32);
s32 func_0027FDBC(s32, s32);
s32 func_0025EC18(void *arg0, s32 arg1)
{
  s32 var_s1;
  char *new_var;
  void *var_s0;
  int new_var2;
  var_s1 = 0;
  var_s0 = arg0 + 0x20;
  new_var = (char *) arg0;
  new_var2 = 0;
  if ((*((s32 *) (new_var + 0x1C))) > new_var2)
  {
    loop_1:
    if (func_0027FC78((s32) var_s0, arg1) == 0)
    {
      return 1;
    }

    var_s1 += 1;
    var_s0 += func_0026ACA0((s32) var_s0) + 1;
    if (var_s1 >= (*((s32 *) (new_var - -0x1C))))
    {
      goto block_4;
    }
    goto loop_1;
  }
  block_4:
  func_0027FDBC((s32) var_s0, arg1);

  *((s32 *) (new_var + 0x1C)) = (s32) ((*((s32 *) (new_var + 0x1C))) + 1);
  return 0;
}
}
