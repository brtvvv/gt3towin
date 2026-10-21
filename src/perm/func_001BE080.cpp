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
void func_001BE080(void *arg0, s32 arg1, s32 arg2)
{
  int new_var;
  *((s32 *) (((char *) arg0) + 0)) = arg1;
  *((s32 *) (((char *) arg0) + 4)) = arg2;
  *((s32 *) (((char *) arg0) + 0x10)) = -0x80;
  *((s32 *) (((char *) arg0) + 0x20)) = 0;
  new_var = 0x80;
 do { *((s32 *) (((char *) arg0) + 8)) = 0; *((s32 *) (((char *) arg0) + 0xC)) = -new_var; *((s32 *) (((char *) arg0) + 0x14)) = 0; *((s32 *) (((char *) arg0) + 0x18)) = 0; } while (0);
  *((s32 *) (((char *) arg0) + 0x1C)) = 0;
}
}
