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
void func_0022EF28(void *arg0, void **arg1)
{
  void *temp_v1;
  temp_v1 = *((void **) (((char *) arg0) + 8));
  if (temp_v1 != 0)
  {
    *((void **) (((char *) temp_v1) + 4)) = (void *) (*((void **) (((char *) arg0) + 4)));
  }
  if (!((*((void **) (((char *) arg0) + 4))) == 0))
  {
    *((void **) (((char *) (*((void **) (((char *) arg0) + 4)))) + 8)) = *((void **) (((char *) arg0) + 8));
  }
  else
  {
    *arg1 = *((void **) (((char *) arg0) + 8));
  }
  *((s32 *) (((char *) arg0) + 0)) = 0;
}
}
