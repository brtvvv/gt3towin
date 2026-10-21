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
void func_00189348(void *arg0, s32 unused1, s32 arg2)
{
  char *new_var;
  char *new_var3;
  void *new_var2;
  new_var2 = arg0;
  *((s32 *) (((char *) new_var2) + 0x18)) = arg2;
  *((s8 *) (((char *) arg0) + 0)) = 1;
  new_var = (char *) new_var2;
 do { new_var3 = new_var + 0x10; *((s8 *) (((char *) arg0) + 1)) = 0; *((s8 *) (((char *) arg0) + 0xC)) = 0; *((s32 *) new_var3) = 0; } while (0);
  *((s32 *) (new_var + 0x14)) = 0;
}
}
