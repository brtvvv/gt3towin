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
s16 func_0020AFC8(s32 arg0, s32 arg1)
{
  int new_var2;
  char *new_var;
  if (1)
  {
    new_var2 = ((arg1 * 8) + arg0) + 0x96E0;
    new_var = ((char *) new_var2) + 6;
    return *((s16 *) new_var);
  }
}
}
