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
s32 func_001ED458(s32, s32, s32, s32, s32, s32, s32);
s32 func_001F3A90(s32, s32);
void func_001F0A60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 unused4, s32 arg5, s32 arg6)
{
  u8 *new_var;
  new_var = (u8 *) (((char *) func_001F3A90(arg0, arg1)) + 0x14A2);
  func_001ED458(arg0, arg1, arg2 - 1, arg3, arg5, arg6, (s32) (*new_var));
}
}
