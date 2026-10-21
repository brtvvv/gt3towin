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
void func_00220C50(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 fparg0)
{
  void *new_var;
  *((f32 *) (((char *) arg0) + 0)) = fparg0;
  new_var = arg0;
  *((s32 *) (((char *) new_var) + 0x18)) = arg1;
  *((s32 *) (((char *) arg0) + 8)) = arg2;
  *((s32 *) (((char *) arg0) + 0xC)) = arg3;
 do { new_var = arg0; } while (0);
  *((s32 *) (((char *) new_var) + 0x10)) = arg5;
  *((s32 *) (((char *) new_var) + 0x14)) = arg4;
}
}
