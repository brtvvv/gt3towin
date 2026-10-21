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
f32 func_001EC340(s32, f32);
f32 func_001EC3A0(s32, f32);
f32 func_001EC3D0(s32, f32);
void func_002005E0(s32 arg0, s32 arg1, f32 *arg2, f32 *arg3, f32 *arg4)
{
  s32 temp_s0;
  f32 new_var;
  void **new_var2;
  new_var2 = (void **) (((char *) (arg0 + (arg1 * 4))) + 0x18);
  temp_s0 = *((s32 *) (((char *) (*new_var2)) + 0x18));
  *arg2 = func_001EC340(temp_s0, 0.0f);
  *arg3 = func_001EC3A0(temp_s0, 0.0f);
  new_var = func_001EC3D0(temp_s0, 0.0f);
  *arg4 = new_var;
}
}
