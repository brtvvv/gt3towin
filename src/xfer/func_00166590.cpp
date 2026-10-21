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
s32 func_002359F8(s32);
s32 func_00166590(void *arg0, s32 arg1)
{
  s32 new_var;
  s32 temp_a0;
  temp_a0 = *((s32 *) (((char *) ((  {
    s32 _g = func_00219680() + 0x307C8;
    _g;
  }
))) + 0x540));
  if (temp_a0 != 0)
  {
    new_var = (s32) (*((u8 *) (((char *) func_002359F8(temp_a0 + 0x10)) + 0x11)));
    if (new_var >= 4)
    {
      *((s32 *) (((char *) arg0) + 0xF50)) = arg1;
    }
  }
  return 1;
}
}
