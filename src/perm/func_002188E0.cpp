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
s32 func_002188E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  int new_var2;
  unsigned int new_var;
  new_var2 = ((new_var = arg3 * 4) + (arg2 * 0x28)) + (arg1 * 0x50);
  return *((s32 *) (arg0 + new_var2));
}
}
