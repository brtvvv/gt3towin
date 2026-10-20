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
void *func_00267BD0(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4)
{
  int new_var;
  *((s8 *) (((char *) arg0) + 2)) = arg1;
  *((s8 *) (((char *) arg0) + 3)) = arg2;
  *((s8 *) (((char *) arg0) + 4)) = arg3;
  new_var = 0xF0;
  *((s8 *) (((char *) arg0) + 5)) = arg4;
  *((s8 *) (((char *) arg0) + 0)) = new_var;
  *((s8 *) (((char *) arg0) + 1)) = 0;
  return arg0;
}
}
