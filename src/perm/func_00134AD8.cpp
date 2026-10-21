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
void func_00134AD8(void *arg0)
{
  char *new_var;
 new_var = (char *) arg0; do { if (arg0 || new_var) { *((s32 *) (((char *) arg0) + 0xC)) = 0; *((s32 *) (new_var + 4)) = 0; *((s32 *) (((char *) arg0) + 0)) = 0x157529FF; } else { *((s32 *) (((char *) arg0) + 0xC)) = 0; *((s32 *) (new_var + 4)) = 0; *((s32 *) (((char *) arg0) + 0)) = 0x157529FF; } } while (0);
  *((s32 *) (new_var + 8)) = 0;
}
}
