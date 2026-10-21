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
s32 func_00219680(void);
s32 func_002359F8(s32);
s32 func_00169A40(void)
{
  s32 temp_s1;
  s32 temp_s1_2;
  u16 temp_s0;
  temp_s1_2 = *((s32 *) (((char *) ((  {
    s32 _g = func_00219680() + 0x307C8;
    _g;
  }
))) + 0x540));
  if (temp_s1_2 == 0)
  {
    return 0;
  }
  temp_s1 = temp_s1_2 + 0x10;
  temp_s0 = *((u16 *) (((char *) func_002359F8(temp_s1)) + 0x26));
  return temp_s0 != (*((u16 *) (((char *) func_002359F8(temp_s1)) + 0x24)));
}
}
