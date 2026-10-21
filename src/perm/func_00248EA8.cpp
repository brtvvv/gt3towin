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
void func_00248798(s32, s32, s32, s32, f32, f32, f32);
void func_00248EA8(void *arg0, s32 arg1, f32 fparg0, f32 fparg1, f32 fparg2)
{
  s32 temp_a3;
  temp_a3 = *((s32 *) (((char *) arg0) + 8));
  func_00248798((s32) arg0, arg1, (*((s32 *) (((char *) arg0) + 0x38))) + ((temp_a3 & (~3)) * 4), temp_a3 & 3, fparg0, fparg1, fparg2);
  *((s32 *) (((char *) arg0) + 8)) = (s32) ((*((s32 *) (((char *) arg0) + 8))) + 1);
}
}
