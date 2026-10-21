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
void func_001D5130(s32);
s32 func_001D5C08(s32, s32);
void func_0016B348(s32 arg0)
{
  s32 temp_v0;
  void *temp_v0_2;
  f32 *new_var;
  void *temp_v0_3;
  char *new_var2;
  func_001D5130(arg0);
  temp_v0 = func_001D5C08(arg0, -1);
  if (temp_v0 != 0)
  {
    temp_v0_2 = *((void **) (((char *) arg0) + 0x24C));
    new_var = (f32 *) (((char *) temp_v0) + 0x34);
    new_var2 = ((char *) temp_v0_2) + 0x2C;
    *((s32 *) new_var2) = 0;
    temp_v0_3 = temp_v0_2 + 0x2C;
    *((f32 *) (((char *) temp_v0_3) + 8)) = (f32) (*new_var);
    *((s32 *) (((char *) temp_v0_3) + 4)) = 0;
  }
}
}
