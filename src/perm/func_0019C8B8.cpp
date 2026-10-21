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
s32 func_00244D30(s32);
s32 func_00245EB8(s32);
s32 func_00248E58(s32, s32);
extern s32 D_002F5880 __attribute__((section(".data")));
void func_0019C8B8(void *arg0)
{
  s32 temp_v0;
  func_00245EB8(arg0 + 0xC4);
  temp_v0 = *((s32 *) (((char *) arg0) + 8));
  *((s32 *) (((char *) arg0) + 0xA00)) = temp_v0;
  if (temp_v0 == 0)
  {
    if (((*((s32 *) (((char *) arg0) + 0xA2C))) == 0) && ((temp_v0 = *((s32 *) (((char *) arg0) + 0x1840))) == 0))
    {
      func_00245EB8((s32) (arg0 + 0x8C));
      return;
    }
    goto block_5;
  }
  block_5:
  func_00244D30((s32) (&D_002F5880));

  func_00248E58((s32) arg0, *((s32 *) (((char *) arg0) + 0xFC)));
  func_00245EB8((s32) (arg0 + 0x8C));
}
}
