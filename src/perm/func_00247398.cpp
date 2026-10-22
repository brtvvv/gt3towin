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
typedef s32 (*VFNPTR)();
typedef struct VTE
{
  s16 d;
  s16 i;
  VFNPTR f;
} VTE;
f32 func_00246F60(s32, f32, f32, f32, f32, f32);
void func_00247398(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5)
{
  s32 temp_a0;
  s32 var_s1;
  *((f32 *) (((char *) arg0) + 0x10)) = fparg0;
  *((f32 *) (((char *) arg0) + 0x14)) = fparg1;
  var_s1 = (*((s32 *) (((char *) arg0) + 0x30))) - 1;
  *((f32 *) (((char *) arg0) + 0x18)) = fparg2;
  *((f32 *) (((char *) arg0) + 0x1C)) = fparg3;
  *((f32 *) (((char *) arg0) + 0x24)) = fparg5;
  *((s32 *) (((char *) arg0) + 0)) = 0;
  *((s32 *) (((char *) arg0) + 4)) = 0;
  *((s32 *) (((char *) arg0) + 8)) = 0;
  *((s32 *) (((char *) arg0) + 0xC)) = 0;
  *((f32 *) (((char *) arg0) + 0x20)) = fparg4;
  *((f32 *) (((char *) arg0) + 0x28)) = fparg4;
  if (var_s1 >= 0)
  {
    do
    {
      temp_a0 = var_s1 << 5;
      var_s1 -= 1;
      func_00246F60((*((s32 *) (((char *) arg0) + 0x2C))) + temp_a0, *((f32 *) (((char *) arg0) + 0x14)), *((f32 *) (((char *) arg0) + 0x18)), *((f32 *) (((char *) arg0) + 0x20)), *((f32 *) (((char *) arg0) + 0x24)), *((f32 *) (((char *) arg0) + 0x28)));
    }
    while (var_s1 >= 0);
  }
}
}
