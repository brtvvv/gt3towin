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
s32 func_002325C8(s32, s32);
void *func_00232980(s32 arg0, s32 arg1, s32 arg2)
{
  void *temp_v0;
  void *new_var;
  temp_v0 = func_002325C8(arg0, arg1);
  new_var = temp_v0 + 0x10;
  return new_var + ((*((u16 *) (((char *) temp_v0) + 0xA))) * arg2);
}
}
