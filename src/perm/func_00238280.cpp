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
void func_00238280(void *arg0, s32 arg1)
{
  *((s32 *) (((char *) arg0) + 0x180)) = arg1;
 do { } while (0);
  *((s32 *) (((char *) arg0) + 0x17C)) = arg1;
}
}
