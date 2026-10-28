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
typedef s32 (*VFNPTR)();
typedef struct VTE
{
  s16 d;
  s16 i;
  VFNPTR f;
} VTE;
s32 func_00221268(s32, s32, s32, s32, s32, s32);
s32 func_00221680(s32, s32, s32, s32, s32, s32, s32);
s32 func_00221A80(s32, s32, s32, s32, s32, s32, s32);
s32 func_00222470(s32, s32);
void func_002224C0(s32, s32);
void func_00220F38(void *arg0, s32 arg1, s32 arg2)
{
  func_00222470(arg1, 2);
  func_002224C0(arg1, 0x3C);
  if ((((s32) (*((s32 *) (((char *) (*((void **) (((char *) (*((void **) (((char *) arg0) + 0x18)))) + 0x84)))) + 0x14)))) >> 1) & 1)
  {
    func_00221268((s32) arg0, arg1, arg2, 1, 0, 0);
    func_00221A80((s32) arg0, arg1, arg2, 1, 0, 0, 0);
    func_00221680((s32) arg0, arg1, arg2, 1, 0, 0, 0);
    func_00221A80((s32) arg0, arg1, arg2, 1, 0, 0, 1);
    func_00221680((s32) arg0, arg1, arg2, 1, 0, 0, 1);
    return;
  }
  func_00221268((s32) arg0, arg1, arg2, 1, 0, 0);
  func_00221A80((s32) arg0, arg1, arg2, 1, 0, 0, 0);
  func_00221680((s32) arg0, arg1, arg2, 1, 0, 0, 0);
}
}
