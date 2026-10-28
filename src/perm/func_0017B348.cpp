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
void func_00177E30(s32);
void func_0017B348(void *arg0)
{
  s32 temp_v1;
  u32 temp_s1;
  u32 var_s0;
  temp_s1 = *(*((u32 **) (((char *) arg0) + 0x18)));
  var_s0 = 0;
  if (temp_s1 != 0)
  {
    loop_2:
    temp_v1 = var_s0 * 4;

    var_s0 += 1;
    func_00177E30(*((s32 *) (temp_v1 + (*((s32 *) (((char *) (*((u32 **) (((char *) arg0) + 0x18)))) + 8))))));
    if (var_s0 < temp_s1)
    {
      goto loop_2;
    }
  }
}
}
