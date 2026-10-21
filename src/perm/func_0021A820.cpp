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
s32 func_00218E68(s32, s32, s32);
void func_0021A820(void *arg0, s32 arg1)
{
  int new_var;
  new_var = 1;
  if (new_var != 0)
  {
    func_00218E68(arg0 + 0x307C8, arg1, new_var);
  }
  *((s32 *) (((char *) arg0) + 0x34)) = -new_var;
}
}
