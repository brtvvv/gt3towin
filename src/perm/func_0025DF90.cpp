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
void func_0025C400(s32, s32);
extern volatile char D_004A8D60 __attribute__((section(".data")));
void func_0025DF90(void)
{
 do { func_0025C400((s32) (&D_004A8D60), 0x4D504731); func_0025C400((s32) ((&D_004A8D60) + 0xC0), 0x4D504732); } while (0);
}
}
