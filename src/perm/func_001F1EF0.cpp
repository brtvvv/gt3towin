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
s32 func_001F0538(s32, s32, s32);
s32 func_001F3A90(s32, s32);
s32 func_001F1EF0(s32 arg0, s32 arg1, s32 unused2, s32 unused3, s32 unused4, s32 arg5)
{
  char *new_var;
  new_var = (char *) (arg0 + 0xE340);
  if ((*((u8 *) (new_var + 2))) == 2)
  {
    func_001F0538(arg0, func_001F3A90(arg0, arg1), arg5);
    return 1;
  }
  return 0;
}
}
