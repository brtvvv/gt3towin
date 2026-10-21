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
void func_002394B0(void *arg0)
{
  char *new_var;
  *((s64 *) (((char *) arg0) + 0x10)) = 0;
  new_var = ((char *) arg0) + 0x20;
  *((s64 *) new_var) = 0;
  *((s32 *) (arg0 + 0x18)) = 0;
}
}
