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
void func_0025A150(void *arg0, s32 arg1)
{
  char *new_var;
  void *new_var2;
  *((s32 *) (((char *) arg0) + 4)) = arg1;
  *((s32 *) (((char *) arg0) + 0x10)) = 0;
 do { new_var2 = arg0; *((s32 *) (0 + ((char *) arg0))) = arg1; *((s32 *) (((char *) arg0) + 8)) = 0; } while (0);
  new_var = ((char *) new_var2) + 0xC;
  *((s32 *) new_var) = 0;
}
}
