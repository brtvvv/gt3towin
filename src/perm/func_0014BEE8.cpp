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
s32 func_00147810(void);
s32 func_00147EC0(void);
s32 func_0014ADA8(s32);
s32 func_0027E260(s32, s32, s32, s32, s32, s32);
s32 func_00280088(s32, s32, s32);
void func_0014BEE8(s32 arg0, void *arg1)
{
  s32 temp_v0;
  s32 var_s1;
  void *temp_v0_2;
  temp_v0 = func_0014ADA8(arg0);
  if (!(temp_v0 != 0))
  {
    var_s1 = 0;
  }
  else
  {
    temp_v0_2 = *((void **) (((char *) temp_v0) + 8));
    var_s1 = func_0027E260(*((s32 *) (((char *) temp_v0_2) + 4)), (s32) func_00147810, 1, temp_v0 + (*((s16 *) (((char *) temp_v0_2) + 0))), (s32) func_00147EC0, temp_v0);
  }
  if (var_s1 == 0)
  {
    *((s8 *) (((char *) arg1) + 0)) = 0;
    return;
  }
  if ((*((VTE **) (((char *) temp_v0) + 0x8)))[5 + 1].f(((char *) temp_v0) + (*((VTE **) (((char *) temp_v0) + 0x8)))[5 + 1].d) == 0)
  {
    *((s8 *) (((char *) arg1) + 0)) = 0;
    return;
  }
  func_00280088((s32) arg1, var_s1 + 0x269, 0x18);
  *((s8 *) (((char *) arg1) + 0x18)) = 0;
}
}
