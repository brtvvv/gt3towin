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
void func_001E1670(void *arg0)
{
  *((f32 *) (((char *) arg0) + 0x500)) = (f32) (*((f32 *) (((char *) arg0) + 0x470)));
  *((f32 *) (((char *) arg0) + 0x50C)) = (f32) (*((f32 *) (((char *) arg0) + 0x468)));
 do { *((s32 *) (((char *) arg0) + 0x4FC)) = 0; *((s32 *) (((char *) arg0) + 0x508)) = 0; *((s32 *) (((char *) arg0) + 0x504)) = 0; } while (0);
  *((s32 *) (((char *) arg0) + 0x4F8)) = 0;
  *((s32 *) (((char *) arg0) + 0x510)) = 0;
}
}
