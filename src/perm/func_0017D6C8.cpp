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
s32 func_00235628(s32);
s32 func_00237680(s32);
s32 func_00237758(s32);
s32 func_00237818(s32);
s32 func_00239A20(s32, s64);
void func_0017D6C8(void *arg0)
{
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_v0;
  u32 var_s1;
  u32 var_s1_2;
  void *temp_a0;
  void *temp_s2;
  temp_s2 = *((void **) (((char *) arg0) + 4));
  temp_a0 = *((void **) (((char *) temp_s2) + 0x28));
  temp_v0 = func_00239A20((s32) temp_a0, *((s64 *) (((char *) temp_a0) + 0x20)));
  switch (temp_v0)
  {
    case 1:
      var_s1 = 0;
 do { if ((*((u32 *) (((char *) (*((void **) (((char *) temp_s2) + 0x18)))) + 0))) != 0) { do { temp_s0 = var_s1 * 4; var_s1 += 1; func_00237818((*((s32 *) (temp_s0 + (*((s32 *) (((char *) (*((void **) (((char *) temp_s2) + 0x18)))) + 8)))))) + 0x20); func_00237680((*((s32 *) (temp_s0 + (*((s32 *) (((char *) (*((void **) (((char *) temp_s2) + 0x18)))) + 8)))))) + 0x20); } while (var_s1 < ((u32) (*((u32 *) (((char *) (*((void **) (((char *) temp_s2) + 0x18)))) + 0))))); } return; } while (0);

    case 2:
      var_s1_2 = 0;
      if ((*((u32 *) (((char *) (*((void **) (((char *) temp_s2) + 0x18)))) + 0))) != 0)
    {
      do
      {
        temp_s0_2 = var_s1_2 * 4;
        var_s1_2 += 1;
        func_00237758((*((s32 *) (temp_s0_2 + (*((s32 *) (((char *) (*((void **) (((char *) temp_s2) + 0x18)))) + 8)))))) + 0x20);
        func_00235628((*((s32 *) (temp_s0_2 + (*((s32 *) (((char *) (*((void **) (((char *) temp_s2) + 0x18)))) + 8)))))) + 0x20);
      }
      while (var_s1_2 < ((u32) (*((u32 *) (((char *) (*((void **) (((char *) temp_s2) + 0x18)))) + 0)))));
    }
      break;

  }

}
}
