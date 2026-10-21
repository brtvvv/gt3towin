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
s32 func_001F98C8(s32, s32, s32);
s32 func_001E4CE8(s32 arg0)
{
  int new_var;
  new_var = arg0 + 0xF84;
  if (func_001F98C8(arg0 + 0xEC8, 3, 1) == 0)
  {
    return 0;
  }
  *((s8 *) (((char *) new_var) + 0x534)) = 4;
  return 1;
}
}
