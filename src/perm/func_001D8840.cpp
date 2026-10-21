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
s32 func_001BA6C8(s32, s32);
s32 func_001BAC38(s32, s32, s32);
s32 func_001C36B0(s32, s32);
s32 func_001C3DD8(s32, s32);
void func_001D8840(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  f32 temp_f20;
  f32 temp_f22;
  f32 temp_f23;
  f32 temp_f21;
  s32 temp_a1;
  s32 temp_s1;
  s32 temp_s5;
  void *temp_s2;
  void *temp_s3;
  temp_s2 = arg0 + 0x20;
  temp_s3 = arg0 + 0x2C;
  temp_f20 = *((f32 *) (((char *) temp_s2) + 8));
  temp_f21 = *((f32 *) (((char *) temp_s3) + 8));
  temp_f22 = *((f32 *) (((char *) arg0) + 0x38));
  temp_f23 = *((f32 *) (((char *) arg0) + 0x3C));
  temp_s5 = *((s32 *) (((char *) arg0) + 0xAC));
  temp_s1 = func_001C3DD8(*((s32 *) (((char *) arg0) + 0x100)), arg1);
  *((s32 *) (((char *) arg0) + 0xAC)) = 0;
  if (temp_s1 != 0)
  {
    func_001BAC38((s32) arg0, temp_s1, func_001C36B0(*((s32 *) (((char *) arg0) + 0x100)), temp_s1));
    temp_a1 = *((s32 *) (((char *) arg0) + 0xE4));
    if (temp_a1 != 0)
    {
      func_001BA6C8((s32) arg0, temp_a1);
    }
  }
  if (arg3 == 0)
  {
    *((s32 *) (((char *) arg0) + 0x20)) = 0;
    *((f32 *) (((char *) temp_s2) + 8)) = temp_f20;
    *((s32 *) (((char *) temp_s2) + 4)) = 0;
 do { *((s32 *) (((char *) arg0) + 0x2C)) = 0; } while (0);
    *((f32 *) (((char *) temp_s3) + 8)) = temp_f21;
    *((s32 *) (((char *) temp_s3) + ((long) 4))) = 0;
  }
  if (arg2 == 0)
  {
    *((f32 *) (((char *) arg0) + 0x38)) = temp_f22;
    *((f32 *) (((char *) arg0) + 0x3C)) = temp_f23;
  }
  *((s32 *) (((char *) arg0) + 0xAC)) = temp_s5;
}
}
