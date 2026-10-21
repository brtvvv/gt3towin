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
void func_00218EF8(s32, s32, s32);
void func_0021A8F8(void *arg0, s32 arg1)
{
  func_00218EF8(arg0 + 0x307C8, arg1, 1);
  *((s32 *) (((char *) arg0) + 0x34)) = -1;
}
}
