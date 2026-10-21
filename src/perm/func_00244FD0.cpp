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
s32 func_002530C8(s32);
s32 func_00253198(s32);
void func_00244FD0(void *arg0, void *arg1)
{
  s32 temp_s0;
  void *temp_v0;
  void *temp_v1;
  if ((*((s32 *) (((char *) arg0) + 0xA2C))) != 0)
  {
    temp_s0 = func_002530C8(0);
    *((s32 *) (((char *) arg1) + 0x1C)) = func_00253198(0x20000);
    func_002530C8(temp_s0);
  }
  else
  {
    *((s32 *) (((char *) arg1) + 0x1C)) = 0;
  }
  *((s32 *) (((char *) arg1) + 8)) = 0;
  temp_v1 = arg0 + 0xA14;
 do { *((void **) (((char *) arg1) + 4)) = (void *) (*((void **) (((char *) temp_v1) + 4))); temp_v0 = *((void **) (((char *) temp_v1) + 4)); if (temp_v0 == 0) { *((void **) (((char *) arg0) + 0xA14)) = arg1; } else { *((void **) (((char *) temp_v0) + 8)) = arg1; } } while (0);
  *((void **) (((char *) arg1) + 0)) = temp_v1;
  *((void **) (((char *) temp_v1) + 4)) = arg1;
}
}
