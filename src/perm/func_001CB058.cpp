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
s32 func_001B4E20(s32);
s32 func_001C5E88(s32);
void func_001CB058(void *arg0, void *arg1, s32 arg2)
{
  s32 (*temp_v0_2)(s32, void *, s32, void *, s32);
  void *temp_v0;
  temp_v0 = (*((VTE **) (((char *) arg0) + 0x1C)))[8 + 1].f(((char *) arg0) + (*((VTE **) (((char *) arg0) + 0x1C)))[8 + 1].d);
  if ((temp_v0 != 0) && ((*((s32 *) (((char *) temp_v0) + 0x13C)) = 1, (((*((u16 *) (((char *) arg1) + 0x142))) & 0xF) ^ 4) != 0)))
  {
    if (!(func_001B4E20((s32) temp_v0) != 0))
    {
      func_001C5E88(4);
    }
    else
    {
      temp_v0_2 = *((s32 (**)(s32, void *, s32, void *, s32)) (((char *) arg0) + 0x118));
      if (temp_v0_2 != 0)
      {
        temp_v0_2(*((s32 *) (((char *) arg0) + 0x11C)), arg1, *((s32 *) (((char *) arg0) + 0xD0)), arg0, arg2);
      }
    }
  }
}
}
