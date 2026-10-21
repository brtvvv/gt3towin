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
void func_00230BE0(void *arg0, s8 arg1)
{
  char *new_var;
  *((s8 *) (((char *) arg0) + 8)) = arg1;
  *((s32 *) (((char *) arg0) + 0x34)) = 1;
 do { *((s8 *) (((char *) arg0) + 0xC)) = 0; } while (0);
  *((s32 *) ((new_var = (char *) arg0) + 0)) = 0;
}
}
