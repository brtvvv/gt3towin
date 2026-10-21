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
void func_001C89B0(s32 arg0, void *arg1)
{
  s32 temp_v0;
  s32 var_s0;
  void **temp_v0_2;
  void *temp_a1;
  var_s0 = 0;
  *((s32 *) (temp_a1 = ((char *) arg1) + 0x108)) = (s32) (arg0 + (*((s32 *) temp_a1)));
  if ((*((s32 *) (((char *) arg1) + 0x104))) > 0)
  {
 do { do { do { temp_v0 = var_s0 * 4; var_s0 += 1; temp_v0_2 = temp_v0 + (*((s32 *) (((char *) arg1) + 0x108))); temp_a1 = arg0 + (((s64) (((s64) (*temp_v0_2)) << 0x20)) >> 0x20); *temp_v0_2 = temp_a1; func_001C89B0(arg0, temp_a1); } while (var_s0 < (*((s32 *) (((char *) arg1) + 0x104)))); } while (0); } while (0);
  }
}
}
