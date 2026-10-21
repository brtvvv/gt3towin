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
void func_0022AB90(void *arg0, void *arg1)
{
  char *new_var;
  void *temp_v0;
  temp_v0 = arg1 + 0x40;
  *((f32 *) (((char *) arg1) + 0x80)) = (f32) (*((f32 *) (((char *) arg0) + 0x10)));
  *((f32 *) (((char *) arg1) + 0x40)) = 1.0f;
  *((f32 *) (((char *) arg1) + 0)) = 1.0f;
  *((s32 *) (((char *) arg1) + 0x10)) = 0;
  *((s32 *) (((char *) arg1) + 0x20)) = 0;
  *((s32 *) (((char *) arg1) + 0x30)) = 0;
  *((s32 *) (((char *) arg1) + 4)) = 0;
  *((f32 *) (((char *) arg1) + 0x14)) = 1.0f;
  *((s32 *) (((char *) arg1) + 0x24)) = 0;
  *((s32 *) (((char *) arg1) + 0x34)) = 0;
  *((s32 *) (((char *) arg1) + 8)) = 0;
  *((s32 *) (((char *) arg1) + 0x18)) = 0;
  *((f32 *) (((char *) arg1) + 0x28)) = 1.0f;
  *((s32 *) (((char *) arg1) + 0x38)) = 0;
 do { *((s32 *) (((char *) arg1) + 0xC)) = 0; *((s32 *) (((char *) arg1) + 0x1C)) = 0; *((s32 *) (((char *) arg1) + 0x2C)) = 0; *((f32 *) (((char *) arg1) + 0x3C)) = 1.0f; *((s32 *) (((char *) temp_v0) + 0x10)) = 0; *((s32 *) (((char *) temp_v0) + 0x20)) = 0; *((s32 *) (((char *) temp_v0) + 0x30)) = 0; *((s32 *) (((char *) temp_v0) + 4)) = 0; new_var = (char *) temp_v0; *((f32 *) (((char *) temp_v0) + 0x14)) = 1.0f; *((s32 *) (new_var + 0x24)) = 0; *((s32 *) (new_var + 0x34)) = 0; *((s32 *) (((char *) temp_v0) + 8)) = 0; *((s32 *) (new_var + 0x18)) = 0; *((f32 *) (((char *) temp_v0) + 0x28)) = 1.0f; *((s32 *) (new_var + 0x38)) = 0; *((s32 *) (new_var + 0xC)) = 0; *((s32 *) (((char *) temp_v0) + 0x1C)) = 0; *((s32 *) (((char *) temp_v0) + 0x2C)) = 0; } while (0);
  *((f32 *) (new_var + 0x3C)) = 1.0f;
}
}
