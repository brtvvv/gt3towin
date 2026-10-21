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
s32 func_00221268(s32, s32, s32, s32, s32, s32);
s32 func_00221680(s32, s32, s32, s32, s32, s32, s32);
s32 func_00221A80(s32, s32, s32, s32, s32, s32, s32);
s32 func_00221E70(s32, s32, s32, s32);
s32 func_00222470(s32, s32);
s32 func_002224C0(s32, s32);
void func_002210A0(s32 arg0, s32 arg1, s32 arg2)
{
  func_00222470(arg1, 0);
  func_002224C0(arg1, 0x2C);
  func_00221E70(arg0, arg1, arg2, 0);
  arg0++;
  arg0--;
  if ((*((s32 *) (((char *) arg0) + 0x14))) != 0)
  {
    if ((((s32) (*((s32 *) (((char *) (*((void **) (((char *) (*((void **) (((char *) arg0) + 0x18)))) + 0x84)))) + 0x14)))) >> 1) & 1)
    {
      func_00221E70(arg0, arg1, arg2, 1);
      func_00221268(arg0, arg1, arg2, 0, 1, 1);
      func_00221A80(arg0, arg1, arg2, 0, 1, 1, 1);
      func_00221680(arg0, arg1, arg2, 0, 1, 1, 1);
    }
    else
    {
      func_00221E70(arg0, arg1, arg2, 1);
      func_00221268(arg0, arg1, arg2, 0, 1, 1);
    }
  }
}
}
