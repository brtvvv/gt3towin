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
s32 func_001C0428(s32, s32);
void func_00151AF0(void *arg0, s32 arg1)
{
  if (arg1 != 0)
  {
    func_001C0428(arg1, *((s32 *) (((char *) arg0) + 0x2C)));
    *((s32 *) (((char *) arg1) + 0x9C)) = (s32) (*((s32 *) (((char *) arg0) + 0x2C)));
    *((s32 *) (((char *) arg1) + 0xA0)) = 3;
  }
}
}
