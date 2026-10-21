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
void func_002108C8(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5, f32 fparg6)
{
  char *new_var;
  *((f32 *) (((char *) arg0) + 0x148)) = fparg6;
  *((f32 *) (((char *) arg0) + 0x130)) = fparg0;
  *((f32 *) (((char *) arg0) + 0x134)) = fparg1;
  *((f32 *) (((char *) arg0) + 0x138)) = fparg2;
  new_var = ((char *) arg0) + 0x140;
  *((f32 *) (((char *) arg0) + 0x13C)) = fparg3;
 do { *((f32 *) new_var) = fparg4; } while (0);
  *((f32 *) (((char *) arg0) + 0x144)) = fparg5;
}
}
