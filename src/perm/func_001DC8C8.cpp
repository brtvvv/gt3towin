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
s32 func_001DC8C8(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  int new_var4;
  s32 new_var3;
  int new_var2;
  new_var3 = arg1;
  new_var4 = 0x398;
  if (1)
  {
    new_var = 0x10;
  }
  new_var = arg0 + (((*((u8 *) (((char *) (arg0 + (arg2 + ((new_var3 >> 1) * new_var)))) + 0xDD0))) * 0x1B4) + new_var4);
  return new_var2 = new_var;
}
}
