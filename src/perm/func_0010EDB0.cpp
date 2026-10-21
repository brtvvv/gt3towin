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
void func_00105228(s32);
inline char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void func_0010EDB0(void *arg0)
{
  *((s32 *) (inline_fn(arg0) + 0x3AB0)) = 0;
  *((s32 *) (((char *) arg0) + 0x3AB8)) = 0;
  *((s32 *) (((char *) arg0) + 0x3ABC)) = 0;
  *((s32 *) (((char *) arg0) + 0x3AC0)) = 0;
  *((s32 *) (((char *) arg0) + 0x3A44)) = 0;
  *((s32 *) (((char *) arg0) + 0x3A4C)) = 0;
  func_00105228((s32) arg0);
 do { *((s32 *) (((char *) arg0) + 0x3AB4)) = 0; *((s32 *) (((char *) arg0) + 0x3AAC)) = 0; } while (0);
  *((s32 *) (((char *) arg0) + 0x3AA8)) = 0;
  *((s32 *) (((char *) arg0) + 0x3A48)) = 0;
}
}
