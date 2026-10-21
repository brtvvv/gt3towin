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
void func_0025FAA8(void *arg0)
{
  int new_var;
  func_0026D5B8(*((s32 *) (((char *) arg0) + 0x110)));
 do { new_var = 0x118; } while (0);
  *((s32 *) (((char *) arg0) + new_var)) = 0;
  *((s32 *) (((char *) arg0) + 0x110)) = 0;
}
}
