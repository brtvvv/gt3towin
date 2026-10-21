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
void func_001CF0A0(s32, s32);
void func_001CF140(s32 arg0, s32 arg1)
{
  int new_var;
  void *temp_v0;
  func_001CF0A0(arg0, arg1);
  new_var = 0;
 do { } while (new_var);
  temp_v0 = arg0 + 0x2C;
  *((s32 *) (((char *) arg0) + 0x2C)) = new_var;
  *((f32 *) (((char *) temp_v0) + 8)) = (f32) (*((f32 *) (((char *) arg0) + 0x108)));
  *((s32 *) (((char *) temp_v0) + 4)) = new_var;
}
}
