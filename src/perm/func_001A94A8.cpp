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
s32 func_00256D50(f32, f32, f32, f32);
s32 func_00256D70(f32, f32, f32, f32);
void func_001A94A8(void *arg0, f32 fparg0, f32 fparg1)
{
  f32 temp_f1;
  float new_var;
  temp_f1 = *((f32 *) (((char *) arg0) + 0xAB8));
  if (1)
  {
    func_00256D50(1.0f, 1.0f, 1.0f, (new_var = (new_var = (((*((f32 *) (((char *) arg0) + 0xAB0))) - temp_f1) * fparg0) + temp_f1) * fparg1) * (*((f32 *) (((char *) arg0) + 0xA6C))));
    func_00256D70(*((f32 *) (((char *) arg0) + 0xA60)), *((f32 *) (((char *) arg0) + 0xA64)), *((f32 *) (((char *) arg0) + 0xA68)), 0.0f);
  }
}
}
