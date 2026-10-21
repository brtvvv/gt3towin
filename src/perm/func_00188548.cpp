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
void func_00181B68(s32);
s32 func_001F5B28(s32);
void func_00188548(s32 arg0)
{
  func_00181B68(arg0);
  if ((*((s32 *) (((char *) arg0) + 0x9784))) == 0)
  {
    func_001F5B28(arg0 + 0x21B48);
    func_001F5B28(arg0 + 0x21AE8);
  }
}
}
