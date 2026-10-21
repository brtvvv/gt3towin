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
void func_001B2E28(s32);
void func_001B2F28(s32);
void func_00175818(void *arg0)
{
  void *temp_s0;
  ;
  if ((*((s32 *) (((char *) arg0) + 0x920))) != 0)
  {
    if (1)
    {
    }
    func_001B2F28((s32) (arg0 + 0xC));
  }
  func_001B2E28((s32) (arg0 + 0xC));
}
}
