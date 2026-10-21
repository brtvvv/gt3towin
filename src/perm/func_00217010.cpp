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
s32 func_00232C10(s32, s32);
void func_00217010(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
 do { new_var = (arg2 * 0x1F0) + 0x90; func_00232C10(arg0 + new_var, arg1); } while (0);
}
}
