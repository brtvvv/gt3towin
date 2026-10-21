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
s32 func_00232C10(s32, s32);
void func_00183D28(s32 arg0, void *arg1)
{
  int new_var;
  s32 temp_s0;
  s32 temp_s1;
  void *temp_s2;
  temp_s1 = arg1 + 0x20;
  temp_s0 = *((s32 *) (((char *) arg1) + 0x14));
  new_var = (temp_s0 << 9) + 0x58;
  temp_s2 = arg0 + new_var;
  func_00232C10(temp_s1, temp_s2 + 0x18);
  *((s32 *) (((char *) temp_s1) + 0x1E8)) = (s32) (temp_s0 + 0x100);
  if ((*((s32 *) (((char *) temp_s1) + 0x1E0))) != 0)
  {
    *((s32 *) (((char *) arg1) + 0x20E8)) = (s32) (*((s32 *) (((char *) temp_s2) + 0x10)));
    *((s32 *) (((char *) arg1) + 0x20E4)) = (s32) (*((s32 *) (((char *) temp_s2) + 0xC)));
  }
}
}
