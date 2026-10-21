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
void func_0020E708(void *arg0)
{
  s16 *new_var;
  new_var = (s16 *) (((char *) arg0) + 6);
  *((s8 *) (((char *) arg0) + 4)) = -1;
  *new_var = 0;
  *((s8 *) (((char *) arg0) + 5)) = 0;
  *((s16 *) (((char *) arg0) + 0)) = 0;
}
}
