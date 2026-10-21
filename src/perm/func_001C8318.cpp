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
s32 func_001C8288(s32, s32);
s32 func_0027FDBC(s32, s32);
void func_001C8318(s32 arg0, s32 arg1)
{
  s32 new_var;
  if ((arg1 != 0) && ((new_var = func_001C8288(arg0, arg1)) != 0))
  {
    func_0027FDBC(arg0 + 0x88, arg1);
    return;
  }
  if (arg0)
  {
    *((s8 *) (((char *) arg0) + 0x88)) = 0;
  }
  else
  {
    *((s8 *) (((char *) arg0) + 0x88)) = 0;
  }
}
}
