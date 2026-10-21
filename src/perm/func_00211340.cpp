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
void func_00211340(void *arg0, f32 fparg0, f32 fparg1)
{
  *((f32 *) (((char *) arg0) + 4)) = fparg0;
  *((f32 *) (((char *) arg0) + 8)) = fparg1;
}
}
