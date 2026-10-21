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
void func_002102B8(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2)
{
  void *temp_a1;
  void *temp_v0;
  void *temp_v1;
 do { *((s32 *) (((char *) arg0) + 0xA4)) = 0; do { temp_v0 = arg0 + 0xA4; *((f32 *) (((char *) temp_v0) + 8)) = fparg0; } while (0); temp_v1 = arg0 + 0xB0; *((s32 *) (((char *) temp_v0) + 4)) = 0; temp_a1 = arg0 + 0xC8; *((s32 *) (((char *) arg0) + 0xB0)) = 0; } while (0);
  *((f32 *) (((char *) temp_v1) + 8)) = fparg1;
  *((s32 *) (((char *) temp_v1) + 4)) = 0;
  *((s32 *) (((char *) arg0) + 0xC8)) = 0;
  *((f32 *) (((char *) temp_a1) + 8)) = fparg2;
  *((s32 *) (((char *) temp_a1) + 4)) = 0;
}
}
