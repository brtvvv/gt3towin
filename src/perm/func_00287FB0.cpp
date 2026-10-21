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
void func_00287FB0(void *arg0)
{
  int new_var;
  void *temp_a0;
  new_var = (*((s32 *) (((char *) arg0) + 4))) + 1;
  temp_a0 = (*((void **) (((char *) arg0) + 0xC))) + 1;
  *((s32 *) (((char *) arg0) + 4)) = (s32) new_var;
  *((void **) (((char *) arg0) + 0xC)) = temp_a0;
  if (temp_a0 == (arg0 + ((*((s32 *) (((char *) arg0) + 0))) + 0x10)))
  {
    *((void **) (((char *) arg0) + 0xC)) = (void *) (arg0 + 0x10);
  }
}
}
