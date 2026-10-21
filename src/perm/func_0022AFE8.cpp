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
s32 func_0022AFA8(s32);
void func_0022AFE8(void *arg0)
{
  *((s8 *) (((char *) arg0) + 0x8C)) = 1;
  *((s8 *) (((char *) arg0) + 0x8D)) = 1;
  func_0022AFA8((s32) arg0);
}
}
