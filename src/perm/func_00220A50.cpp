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
void func_00220A50(void *arg0)
{
  *((s32 *) (((char *) arg0) + 0x7C)) = 1;
  *((s32 *) (((char *) arg0) + 0x80)) = 1;
}
}
