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
void func_0019E000(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2)
{
  char *new_var;
  *((f32 *) (((char *) arg0) + 0x64)) = fparg2;
 do { *((f32 *) (((char *) arg0) + 0x58)) = fparg0; new_var = ((char *) arg0) + 0x5C; } while (0);
  *((f32 *) new_var) = fparg1;
}
}
