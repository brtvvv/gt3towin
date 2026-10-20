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
s32 func_00219F60(s32);
s32 func_00238A88(s32, s32);
s32 func_00238C20(s32, s32);
s32 func_00238C98(s32, s32);
s32 func_00239098(s32, s32);
void func_00126788(void)
{
  s32 temp_s0;
  s32 temp_s1;
  s32 var_s2;
  var_s2 = 0x3A;
  temp_s1 = func_00219F60(func_00219680()) + 0x10;
  var_s2 = 0x3A;
  do
  {
    if ((func_00239098(temp_s1, var_s2) != 0) && (func_00238C20(temp_s1, var_s2) == 0))
    {
      func_00238A88(temp_s1, var_s2);
      temp_s0 = func_00219680();
      *((s64 *) (((char *) temp_s0) + 0x18)) = (s64) ((-func_00238C98(temp_s1, var_s2)) + (*((s64 *) (((char *) temp_s0) + 0x18))));
    }
    var_s2 += 1;
    var_s2 = var_s2;
  }
  while (var_s2 < 0x41);
}
}
