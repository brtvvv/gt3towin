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
void func_001D01A0(void *arg0, void *arg1)
{
  *((s32 *) (((char *) arg1) + 0)) = 0;
 do { *((s32 *) (((char *) arg1) + 4)) = 0; *((s32 *) (((char *) arg1) + 0xC)) = 0; *((f32 *) (((char *) arg1) + 8)) = (f32) (*((f32 *) (((char *) arg0) + 0x8C))); *((s32 *) (((char *) arg1) + 0x10)) = 0; } while (0);
  *((f32 *) (((char *) arg1) + 0x14)) = (f32) (*((f32 *) (((char *) arg0) + 0x90)));
  *((f32 *) (((char *) arg1) + 0x18)) = (f32) (*((f32 *) (((char *) arg0) + 0x8C)));
  *((f32 *) (((char *) arg1) + 0x1C)) = (f32) (*((f32 *) (((char *) arg0) + 0x90)));
}
}
