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
void func_00210458(void *arg0, void *arg1)
{
  int new_var;
  void *temp_v0;
  void *temp_v1;
  temp_v0 = arg0 + 0x108;
  *((s32 *) (((char *) arg0) + 0x108)) = 0;
  temp_v1 = arg0 + 0x114;
  *((f32 *) (((char *) temp_v0) + 8)) = (f32) (*((f32 *) (((char *) arg1) + 0)));
  *((s32 *) (((char *) temp_v0) + 4)) = 0;
  new_var = 0;
  *((s32 *) (((char *) arg0) + 0x114)) = new_var;
  *((f32 *) (((char *) temp_v1) + 8)) = (f32) (*((f32 *) (((char *) arg1) + 4)));
 do { } while (0);
  *((s32 *) (((char *) temp_v1) + 4)) = new_var;
  *((f32 *) (((char *) arg0) + 0x120)) = (f32) (*((f32 *) (((char *) arg1) + 8)));
  *((f32 *) (((char *) arg0) + 0x124)) = (f32) (*((f32 *) (((char *) arg1) + 0xC)));
}
}
