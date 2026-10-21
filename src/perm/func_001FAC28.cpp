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
s32 func_001FABC8(s32, s32);
s32 func_001FABF8(s32, s32);
s32 func_001FB478(s32, s32, f32);
void func_001FAC28(s32 arg0, s32 arg1, s32 arg2, f32 fparg0)
{
  int new_var;
  s32 temp_a0;
  new_var = func_001FB478(arg0, arg2, fparg0) == 0;
  temp_a0 = *((s32 *) (((char *) arg0) + 4));
  if (new_var)
  {
    func_001FABC8(temp_a0, arg1);
    return;
  }
  func_001FABF8(temp_a0, arg1);
}
}
