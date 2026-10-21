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
typedef s32 (*VFNPTR)();
typedef struct VTE
{
  s16 d;
  s16 i;
  VFNPTR f;
} VTE;
void func_00151A30(void *arg0, f32 fparg0, f32 fparg1)
{
  f32 var_f12;
  f32 var_f13;
  char *new_var;
  void *temp_a0;
  void *temp_v0;
  void *temp_v0_2;
  void *temp_v1;
  var_f12 = fparg0;
  var_f13 = fparg1;
  temp_v0 = *((void **) (((char *) arg0) + 0x30));
  temp_v1 = ((char *) temp_v0) + 0x48;
  if (temp_v0 != 0)
  {
    var_f12 -= (*((f32 *) (((char *) temp_v0) + 0x44))) + ((*((f32 *) (((char *) temp_v0) + 0x50))) * 0.5f);
    var_f13 -= 448.0f - ((*((f32 *) temp_v1)) + ((*((f32 *) (((char *) temp_v0) + 0x54))) * 0.5f));
  }
  temp_v0_2 = *((void **) (0x2C + ((char *) arg0)));
  *((s32 *) (((char *) temp_v0_2) + 0x20)) = 0;
 do { temp_v1 = temp_v0_2 + 0x20; new_var = (char *) temp_v1; *((f32 *) (new_var + 8)) = var_f12; temp_a0 = temp_v0_2 + 0x2C; *((s32 *) (((char *) temp_v1) + 4)) = 0; *((s32 *) (((char *) temp_v0_2) + 0x2C)) = 0; *((f32 *) (((char *) temp_a0) + 8)) = var_f13; } while (0);
  *((s32 *) (((char *) temp_a0) + 4)) = 0;
}
}
