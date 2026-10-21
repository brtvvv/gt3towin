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
void func_001C19C0(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2)
{
  *((f32 *) (((char *) arg0) + 0x110)) = fparg2;
 do { } while (0);
  *((f32 *) (((char *) arg0) + 0x108)) = fparg0;
  *((f32 *) (((char *) arg0) + 0x10C)) = fparg1;
}
}
