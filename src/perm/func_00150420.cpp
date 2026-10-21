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
s32 func_0014F4D8(s32, s32);
s32 func_0014F648(s32);
s32 func_0014F950(s32);
s32 func_00150488(s32);
void func_001505F0(s32);
void func_00150420(s32 arg0)
{
  s32 temp_s0;
  func_001505F0(arg0);
  if (func_0014F950(arg0) == 0)
  {
 do { temp_s0 = arg0 + 0x2C; } while (0);
    if ((*((s32 *) (((char *) arg0) + 0x54))) < 0)
    {
      func_0014F4D8(temp_s0, func_0014F648(temp_s0) - 1);
    }
  }
  func_00150488(arg0);
}
}
