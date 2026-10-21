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
void func_00220470(s32);
inline s32 *inline_fn(char *arg0)
{
  return (s32 *) (arg0 + 0x6B4);
}

void func_001AB078(void *arg0, s32 arg1)
{
  char *new_var2;
  if (arg1 != 0)
  {
    char *new_var;
    if (1)
    {
      new_var2 = (char *) ((0, arg0));
      if (1)
      {
        new_var = new_var2;
        func_00220470(arg1);
        *inline_fn(new_var) = 1;
      }
    }
  }
}
}
