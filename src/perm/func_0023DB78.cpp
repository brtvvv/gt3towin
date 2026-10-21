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
void func_0026D5B8(s32);
void func_0023DB78(void *arg0)
{
  func_0026D5B8(*((s32 *) (((char *) arg0) + 0x240)));
 do { *((s32 *) (0x250 + ((char *) arg0))) = 0; } while (0);
  *((s32 *) (((char *) arg0) + 0x240)) = 0;
  *((s32 *) (((char *) arg0) + 0x24C)) = 0;
}
}
