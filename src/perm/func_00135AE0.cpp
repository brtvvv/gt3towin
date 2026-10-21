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
f32 func_00135AE0(f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4)
{
  float new_var;
  new_var = 1.0f / (fparg1 - fparg0);
  return (((fparg3 - fparg2) * fparg4) + ((fparg2 * fparg1) - (fparg3 * fparg0))) * new_var;
}
}
