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
s32 func_0015B088(s32, s32);
void func_00144930(void *arg0, s32 arg1)
{
  s32 temp_a0;
  temp_a0 = *((s32 *) (((char *) arg0) + 0x230));
 do { if (temp_a0 != 0) { func_0015B088(temp_a0, arg1); } *((s32 *) (((char *) arg0) + 0x234)) = 0; } while (0);
  *((s32 *) (((char *) arg0) + 0x230)) = 0;
}
}
