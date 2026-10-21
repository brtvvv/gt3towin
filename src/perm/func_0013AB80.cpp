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
s32 func_00139D10(s32, s32, s32, s32);
extern s32 D_00319EC8 __attribute__((section(".data")));
extern s32 D_0049D7D8 __attribute__((section(".data")));
void func_0013AB80(void)
{
  *((s32 **) (((char *) (&D_0049D7D8)) + 0)) = &D_00319EC8;
  *((s32 (**)(s32, s32, s32, s32)) (((char *) (&D_0049D7D8)) + 4)) = func_00139D10;
  *((s32 *) (((char *) (&D_0049D7D8)) + 0x14)) = 0;
  *((s32 *) (((char *) (&D_0049D7D8)) + 8)) = 0;
  *((s32 *) (((char *) (&D_0049D7D8)) + 0xC)) = 0;
 do { *((s32 *) (((char *) (&D_0049D7D8)) + 0x10)) = 0; } while (0);
}
}
