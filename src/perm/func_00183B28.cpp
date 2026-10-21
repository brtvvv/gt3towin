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
s32 func_00181F18(s32, s32);
s32 func_00182878(s32, s32);
s32 func_001A4148(s32, s32);
void func_00183B28(s32 arg0, s32 arg1)
{
  char *new_var2;
  s32 temp_s0;
  s32 new_var;
  func_00182878(arg0, arg1);
  new_var = arg0;
  if (arg1 != 1)
  {
    func_00181F18(arg0, arg0 + 0x2509C);
    return;
  }
  temp_s0 = arg0 + 0x25348;
  new_var2 = (char *) new_var;
  func_001A4148(temp_s0, *((s32 *) (new_var2 + 4)));
  new_var = temp_s0;
  func_00181F18(arg0, new_var);
}
}
