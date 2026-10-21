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
void func_001DF068(void *arg0, s32 arg1)
{
  *((s8 *) (((char *) arg0) + 3)) = 4;
  *((s8 *) (((char *) arg0) + 1)) = 4;
 do { *((s8 *) (((char *) arg0) + 2)) = 4; if (arg1 != 0) { *((s8 *) (((char *) arg0) + 8)) = 0; *((s8 *) (((char *) arg0) + 0x10)) = 0; *((s8 *) (((char *) arg0) + 0x18)) = 0; } if (((u8) (*((u8 *) (((char *) arg0) + 0x21)))) >= 0x33U) { *((u8 *) (((char *) arg0) + 0x21)) = 0x32U; } } while (0);
}
}
