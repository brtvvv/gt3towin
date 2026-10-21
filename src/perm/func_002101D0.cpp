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
void func_002101D0(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4)
{
  *((f32 *) (((char *) arg0) + 0x74)) = fparg4;
  *((f32 *) (((char *) arg0) + 0x64)) = fparg0;
  *((f32 *) (((char *) arg0) + 0x68)) = fparg1;
 do { *((f32 *) (((char *) arg0) + 0x6C)) = fparg2; } while (0);
  *((f32 *) (((char *) arg0) + 0x70)) = fparg3;
}
}
