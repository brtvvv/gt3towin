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
void func_0019D808(void *arg0, f32 fparg0, f32 fparg1)
{
  char *new_var;
  *((f32 *) (((char *) arg0) + 0x38)) = (f32) (fparg0 + 90.0f);
  new_var = ((char *) arg0) + 0x3C;
  *((f32 *) new_var) = (f32) (fparg1 + 90.0f);
}
}
