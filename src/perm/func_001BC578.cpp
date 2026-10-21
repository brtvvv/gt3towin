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
s32 func_001BC338(s32);
s32 func_001BDFF8(s32, s32);
s32 func_001BE080(s32, s32, s32);
s32 func_0023D208(s32, s32);
extern s32 D_00335BE8 __attribute__((section(".data")));
extern s32 D_00335C08 __attribute__((section(".data")));
s32 func_001BC578(void *arg0, s32 arg1)
{
  s32 temp_s2;
  s32 temp_v0;
  void *temp_s1;
  if (arg1 == 0)
  {
    return -1;
  }
  temp_s2 = *((s32 *) (((char *) arg0) + 0xBC));
  *((s32 *) (((char *) arg0) + 0xBC)) = (s32) (temp_s2 + 1);
  temp_v0 = func_001BC338(0x38);
  temp_s1 = temp_v0 + 0x28;
  *((s32 *) (((char *) temp_s1) + 4)) = 0;
  *((s32 **) (((char *) temp_s1) + 8)) = &D_00335C08;
  *((s32 *) (((char *) temp_v0) + 0)) = 0;
  *((s32 *) (((char *) temp_v0) + 8)) = 0;
  *((s32 *) (((char *) temp_v0) + 0x14)) = 0;
  *((s32 *) (((char *) temp_v0) + 0x18)) = 0;
  *((s32 *) (((char *) temp_v0) + 0x1C)) = 0;
  *((s32 *) (((char *) temp_v0) + 0x20)) = 0;
  *((s32 *) (((char *) temp_v0) + 0x24)) = 0;
  *((s32 *) (((char *) temp_v0) + 0x28)) = 0;
  *((s32 *) (((char *) temp_v0) + 0x34)) = temp_s2;
  *((s32 *) (((char *) temp_v0) + 0x10)) = (*((s32 *) (((char *) temp_v0) + 0xC)) = -0x80);
  *((s32 **) (((char *) temp_v0) + 0x30)) = &D_00335BE8;
  func_001BE080(temp_v0, arg1, temp_s2);
  func_001BDFF8(temp_v0, (s32) arg0);
  func_0023D208((s32) (arg0 + 0xB0), (s32) ((temp_v0 != 0) ? (temp_s1) : (0)));
  return temp_s2;
}
}
