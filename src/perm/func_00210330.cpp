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
void func_00210330(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5)
{
  f32 *new_var;
  *((f32 *) (((char *) arg0) + 0xDC)) = fparg5;
  *((f32 *) (((char *) arg0) + 0xBC)) = fparg0;
  *((f32 *) (((char *) arg0) + 0xC0)) = fparg1;
  *((f32 *) (((char *) arg0) + 0xC4)) = fparg2;
  new_var = (f32 *) (((char *) arg0) + 0xD8);
 do { *((f32 *) (((char *) arg0) + 0xD4)) = fparg3; *new_var = fparg4; } while (0);
}
}
