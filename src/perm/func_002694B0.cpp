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
typedef s32 (*VFNPTR)();
typedef struct VTE
{
  s16 d;
  s16 i;
  VFNPTR f;
} VTE;
s32 func_00268D28(s32);
s32 func_00268D80(s32);
void func_002694B0(s32 arg0)
{
  s32 var_s1;
  s8 *var_s0;
  var_s1 = 1;
  var_s0 = arg0 + 0x10;
  do
  {
    if ((*var_s0) >= 0)
    {
      func_00268D80((s32) var_s0);
      func_00268D28((s32) var_s0);
    }
    var_s1 -= 1;
    var_s0 += 0x10;
  }
  while (var_s1 >= 0);
  var_s0 = arg0 + 0x10;
}
}
