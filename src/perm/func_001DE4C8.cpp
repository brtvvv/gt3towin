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
volatile unsigned int func_001DE4C8(s32 arg0)
{
  void *temp_a0;
 do { temp_a0 = arg0 + 0xF84; } while (0);
  *((s8 *) (((char *) temp_a0) + 0x4DF)) = 0;
  *((s8 *) (((char *) temp_a0) + 0x51E)) = 0;
}
}
