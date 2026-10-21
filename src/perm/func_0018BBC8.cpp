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
void func_0018BBC8(void *arg0, s32 arg1, s8 arg2)
{
  *((s8 *) (((char *) arg0) + 9)) = arg2;
 do { *((s32 *) (0 + ((char *) arg0))) = arg1; *((s32 *) (((char *) arg0) + 4)) = 0; } while (0);
  *((s8 *) (((char *) arg0) + 8)) = 0;
}
}
