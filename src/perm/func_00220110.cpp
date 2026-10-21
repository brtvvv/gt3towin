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
extern s32 D_0049EB20 __attribute__((section(".data")));
void func_00220110(f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3)
{
  *((f32 *) (((char *) (&D_0049EB20)) + 0)) = fparg0;
  *((f32 *) (((char *) (&D_0049EB20)) + 0xC)) = fparg3;
 *((f32 *) (((char *) (&D_0049EB20)) + 4)) = fparg1; do { *((f32 *) (((char *) (&D_0049EB20)) + 8)) = fparg2; } while (0);
}
}
