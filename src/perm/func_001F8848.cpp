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
s32 func_001F8700(s32, f32);
s32 func_001F88E8(s32);
void func_001F8848(s32 arg0)
{
  func_001F88E8(arg0);
  func_001F8700(arg0, 0.0f);
 do { *((f32 *) (((char *) arg0) + 0xA4)) = 0.0f; *((f32 *) (((char *) arg0) + 0xA0)) = 0.0f; } while (0);
}
}
