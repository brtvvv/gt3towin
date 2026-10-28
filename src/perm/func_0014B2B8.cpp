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
s32 func_0015B220(s32, s32, s32);
void func_0015B2F8(void);
void func_0014B2B8(void *arg0)
{
  s32 temp_a0_2;
  s32 temp_s1;
  s32 var_s0;
  s32 var_s2;
  u32 temp_a0;
  if (((*((s32 *) (((char *) arg0) + 0x30774))) == 0) && ((*((s32 *) (((char *) arg0) + 0x3076C))) != 0))
  {
    temp_a0 = *((u32 *) (((char *) arg0) + 0x30770));
    if (temp_a0 != 0)
    {
      var_s0 = 0;
      temp_s1 = (((s32) (temp_a0 + (temp_a0 >> 0x1F))) >> 1) & (~0x3F);
      var_s2 = 0;
      do
      {
        temp_a0_2 = var_s0;
        var_s0 += 1;
        func_0015B220(temp_a0_2, (*((s32 *) (((char *) arg0) + 0x3076C))) + var_s2, temp_s1);
        var_s2 += temp_s1;
      }
      while (var_s0 < 2);
      func_0015B2F8();
      *((s32 *) (((char *) arg0) + 0x30774)) = 1;
    }
  }
}
}
