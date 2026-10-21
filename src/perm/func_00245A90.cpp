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
void func_00245A90(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  char *new_var;
  *((s32 *) (((char *) arg0) + 0x18)) = arg1;
  *((s32 *) (((char *) arg0) + 0x30)) = 1;
  new_var = (char *) arg0;
  *((s32 *) (new_var + 0x1C)) = arg2;
  *((s32 *) (new_var + 0x20)) = arg3;
 do { *((s32 *) (new_var + 0x24)) = arg4; } while (0);
}
}
