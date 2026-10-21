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
s32 func_001295F8(void *arg0, f32 fparg0)
{
  f32 temp_f1;
  s32 temp_v0;
  temp_f1 = (*((f32 *) (((char *) arg0) + 0))) + fparg0;
  temp_v0 = (*((s32 *) (((char *) arg0) + 4))) + 1;
  *((s32 *) (((char *) arg0) + 4)) = temp_v0;
  *((f32 *) (((char *) arg0) + 0)) = temp_f1;
  if ((temp_f1 >= 1.0f) && (temp_v0 >= 3))
  {
    *((f32 *) (((char *) arg0) + 0)) = 0.0f;
    *((s32 *) (((char *) arg0) + 4)) = 0;
    return 1;
  }
  if ((*((f32 *) (((char *) arg0) + 0))) >= 1.0f)
  {
    *((f32 *) (((char *) arg0) + 0)) = 1.0f;
  }
  if ((*((s32 *) (((char *) arg0) + 4))) >= 3)
  {
    *((s32 *) (((char *) arg0) + 4)) = 3;
  }
  return 0;
}
}
