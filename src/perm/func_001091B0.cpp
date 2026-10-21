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
void func_001091B0(void *arg0)
{
  *((s32 *) (((char *) arg0) + 0x3AC8)) = 0;
  *((s32 *) (((char *) arg0) + 0x3ACC)) = 0;
  func_00105228((s32) arg0);
  *((s32 *) (((char *) arg0) + 0x3A38)) = 0;
  *((s32 *) (((char *) arg0) + 0x3A44)) = 0;
  *((s32 *) (((char *) arg0) + 0x3A48)) = 0;
 do { } while (0);
  *((s32 *) (((char *) arg0) + 0x3A4C)) = 0;
}
}
