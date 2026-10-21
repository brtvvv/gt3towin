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
void func_001AF450(void *arg0)
{
  int new_var;
  *((s32 *) (((char *) arg0) + 0xC)) = 0;
  new_var = -1;
  *((s32 *) (((char *) arg0) + 8)) = (*((s16 *) (((char *) arg0) + 0)) = new_var);
}
}
