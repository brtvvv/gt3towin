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
void func_001C3270(void *arg0)
{
  *((s32 *) (((char *) arg0) + 0x5C)) = 0;
  *((s32 *) (((char *) arg0) + 8)) = 0;
  *((s8 *) (((char *) arg0) + 0xC)) = 0;
  *((s32 *) (((char *) arg0) + 0x4C)) = 0;
 do { *((s32 *) (((char *) arg0) + 0x50)) = 0; } while (0);
  *((s32 *) (((char *) arg0) + 0x58)) = 0;
}
}
