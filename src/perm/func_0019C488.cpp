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
s32 func_00249480(s32, s32, f32, f32);
void func_0019C488(void *arg0, void *arg1, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5)
{
  *((f32 *) (((char *) arg0) + 0xA10)) = fparg2;
  *((f32 *) (((char *) arg0) + 0xA04)) = (f32) (*((f32 *) (((char *) arg1) + 0)));
  *((f32 *) (((char *) arg0) + 0xA08)) = (f32) (*((f32 *) (((char *) arg1) + 4)));
  *((f32 *) (((char *) arg0) + 0xA0C)) = (f32) (*((f32 *) (((char *) arg1) + 8)));
  *((f32 *) (((char *) arg0) + 0xA14)) = fparg3;
  *((f32 *) (((char *) arg0) + 0xA18)) = fparg4;
  *((f32 *) (((char *) arg0) + 0xA1C)) = fparg5;
  *((s32 *) (((char *) arg0) + 0xA20)) = (s32) (func_00249480((s32) arg0, (s32) (arg0 + 0xA04), fparg0, fparg1) != 0);
}
}
