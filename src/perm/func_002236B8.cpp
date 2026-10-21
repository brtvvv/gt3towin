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
void func_002461C0(s32, s32);
extern void *D_00354464;
extern s32 D_00354468;
extern s32 D_0049EB30 __attribute__((section(".data")));
void func_002236B8(void)
{
  func_002461C0((s32) (&D_0049EB30), *((s32 *) (((char *) D_00354464) + 0x10)));
  D_00354468 = 1;
}
}
