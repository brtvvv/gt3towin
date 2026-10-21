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
s32 func_00232768(s32, s32);
void *func_00232658(s32 arg0, s32 arg1, s32 arg2)
{
  s32 temp_v0_2;
  void *temp_v0;
  int new_var;
  void *new_var2;
  temp_v0_2 = func_00232768(func_002325C8(arg0, arg1), arg2);
  if (temp_v0_2 == (-1))
  {
    return 0;
  }
  new_var = func_002325C8(arg0, arg1);
  temp_v0 = new_var;
  new_var2 = temp_v0 + 0x10;
  return new_var2 + ((*((u16 *) (((char *) temp_v0) + 0xA))) * temp_v0_2);
}
}
