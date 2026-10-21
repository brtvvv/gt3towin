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
s32 func_0010C7A0(s32, s32);
s32 func_00114078(s32);
void func_00114110(s32);
s32 func_00114178(s32);
s32 func_001146F8(s32, s32);
s32 func_001CD840(s32, s32, s32);
void func_001CD868(s32, s32);
s32 func_001155A0(s32 arg0)
{
  s32 temp_s1;
  s32 temp_v0;
  func_00114078(arg0);
  temp_s1 = arg0 + 0x38DC;
  func_00114178(arg0);
  *((s32 *) (((char *) arg0) + 0x3A2C)) = 0;
  *((s32 *) (((char *) arg0) + 0x3A30)) = 0;
  *((s32 *) (((char *) arg0) + 0x3BD8)) = 1;
  func_001CD840(temp_s1, 8, 9);
  func_001CD868(temp_s1, 8);
  temp_v0 = func_0010C7A0(arg0, 0);
 do { } while (0);
  func_001146F8(arg0, temp_v0);
  func_00114110(arg0);
  return temp_v0;
}
}
