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
s32 func_001B9A58(s32, s32);
void func_0021FB10(s32, s32, s32);
void func_001B9B78(void *arg0, void *arg1)
{
  *((void **) (((char *) arg0) + 0x2C8)) = arg1;
  func_0021FB10((s32) (arg0 + 0x2CC), *((s32 *) (((char *) arg1) + 8)), 0);
  if ((*((s8 *) (((char *) arg0) + 0x6A8))) == 0)
  {
    func_001B9A58((s32) arg0, (s32) arg1);
  }
  *((s32 *) (((char *) arg0) + 0x6F0)) = 1;
}
}
