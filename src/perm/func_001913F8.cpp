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
void func_001913F8(void *arg0, u32 arg1)
{
  *((s32 *) (((char *) arg0) + 0)) = (s32) (arg1 & 0xF);
  *((s32 *) (((char *) arg0) + 0xC)) = (s32) ((arg1 >> 4) & 0xF);
  *((s32 *) (((char *) arg0) + 8)) = (s32) ((arg1 >> 8) & 0x3FF);
}
}
