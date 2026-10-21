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
s32 func_00282910(s32, s32);
s32 func_00280578(s32 arg0, void *arg1)
{
  s32 temp_v0;
  if ((*((s32 *) (((char *) arg1) + 8))) == 0)
  {
    *((s32 *) (((char *) arg1) + 4)) = 0;
    return 0;
  }
  temp_v0 = func_00282910(arg0, (s32) arg1);
  *((s32 *) (((char *) arg1) + 4)) = (*((s32 *) (((char *) arg1) + 8)) = 0);
  return temp_v0;
}
}
