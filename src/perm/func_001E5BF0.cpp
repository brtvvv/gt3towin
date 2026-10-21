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
s32 func_001E53B8(s32, s32, s32);
s32 func_001EBBA0(s32, f32);
void func_001E5BF0(s32 arg0, s32 arg1)
{
  void *temp_v0;
  func_001E53B8(arg0, arg1, arg0 + 0x1304);
  arg0++;
  arg0--;
  temp_v0 = arg0 + 0xF84;
  *((f32 *) (((char *) temp_v0) + 0x4A4)) = (f32) (*((f32 *) (((char *) temp_v0) + 0x428)));
  func_001EBBA0(arg0, *((f32 *) (0x42C + ((char *) temp_v0))));
}
}
