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
void func_0019EBA0(s32 arg0, s16 arg1, s16 arg2)
{
  void *temp_a0;
  temp_a0 = arg0 + 0x20;
 do { *((s16 *) (((char *) temp_a0) + 0xA)) = arg2; } while (0);
  *((s16 *) (((char *) temp_a0) + 8)) = arg1;
}
}
