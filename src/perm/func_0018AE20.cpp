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
void func_00188350(s32, s32);
s32 func_001A4148(s32, s32);
void func_0018AE20(s32 arg0, s32 arg1)
{
  s32 temp_s0;
  func_00188350(arg0, arg1);
  if (arg1 != 1)
  {
    func_00181F18(arg0, arg0 + 0x21C00);
    return;
  }
  temp_s0 = arg0 + 0x21ED0;
  func_001A4148(temp_s0, *((s32 *) (((char *) arg0) + 4)));
  func_00181F18(arg0, temp_s0);
}
}
