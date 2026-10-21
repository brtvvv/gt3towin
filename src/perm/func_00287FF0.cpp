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
void func_00287FF0(void *arg0)
{
  void *temp_a0;
  *((s32 *) (((char *) arg0) + 4)) = (s32) ((*((s32 *) (((char *) arg0) + 4))) - 1);
  temp_a0 = (*((void **) (((char *) arg0) + 8))) + 1;
  *((void **) (((char *) arg0) + 8)) = temp_a0;
  if (temp_a0 == (arg0 + ((*((s32 *) (((char *) arg0) + 0))) + 0x10)))
  {
    *((void **) (((char *) arg0) + 8)) = (void *) (arg0 + 0x10);
  }
}
}
