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
s32 func_00245330(s32, s32);
s32 func_0024AEC0(s32, s32);
s32 func_0024AEF0(s32, s32, s32);
void func_0024B5F0(void);
extern s32 D_002F5880 __attribute__((section(".data")));
void func_0023E570(void *arg0)
{
  void *temp_a0;
  void *temp_v1;
  temp_v1 = *((void **) (((char *) arg0) + 0x244));
  if ((temp_v1 != 0) && ((*((s32 *) (((char *) arg0) + 0x258))) == 0))
  {
    func_00245330((s32) (&D_002F5880), *((s32 *) (((char *) temp_v1) + 0x1C)));
    temp_a0 = *((void **) (((char *) arg0) + 0x244));
    func_0024AEC0((s32) temp_a0, (*((s32 *) (((char *) (*((s32 *) (((char *) temp_a0) + 0x1C)))) + 0x18))) + ((*((s32 *) (((char *) arg0) + 0x254))) * 0x28));
    func_0024AEF0(*((s32 *) (((char *) arg0) + 0x24C)), (*((s32 *) (((char *) arg0) + 0x250))) + ((*((s32 *) (((char *) arg0) + 0x254))) << 6), *((s32 *) (((char *) (&D_002F5880)) + 0xB50)));
    func_0024B5F0();
    *((s32 *) (((char *) arg0) + 0x258)) = 1;
  }
}
}
