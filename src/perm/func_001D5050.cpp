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
s32 func_001D4E80(s32, s32);
extern s32 D_0033A4C0 __attribute__((section(".data")));
s32 func_001D5050(s32 arg0, s32 arg1)
{
  func_001D4E80(arg0, arg1);
  *((s32 **) (((char *) arg0) + 0x1C)) = &D_0033A4C0;
  *((s32 *) (((char *) arg0) + 0x204)) = 0;
  *((s32 *) (((char *) arg0) + 0x208)) = 0;
  *((s32 *) (((char *) arg0) + 0x20C)) = 0;
  *((s32 *) (((char *) arg0) + 0x210)) = 0;
  *((s32 *) (((char *) arg0) + 0x214)) = 0;
  *((s32 *) (((char *) arg0) + 0x218)) = 0;
  *((s32 *) (((char *) arg0) + 0x21C)) = 0;
  *((s32 *) (((char *) arg0) + 0x220)) = 0;
  *((s32 *) (((char *) arg0) + 0x224)) = 0;
  *((s32 *) (((char *) arg0) + 0x228)) = 0;
  *((s32 *) (((char *) arg0) + 0x22C)) = 0;
  *((s32 *) (((char *) arg0) + 0x230)) = 0;
  *((s32 *) (((char *) arg0) + 0x234)) = 0;
  *((s32 *) (((char *) arg0) + 0x238)) = 1;
  *((s32 *) (((char *) arg0) + 0x23C)) = 0;
  *((s32 *) (((char *) arg0) + 0x240)) = 1;
  *((s32 *) (((char *) arg0) + 0x170)) = 0;
  *((s32 *) (((char *) arg0) + 0x1F8)) = 0;
  *((s32 *) (((char *) arg0) + 0x244)) = 1;
  return arg0;
}
}
