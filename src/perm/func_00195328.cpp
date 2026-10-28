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
void func_00198300(s32, s32);
extern s32 D_00353938 __attribute__((section(".data")));
void func_00195328(void *arg0, s32 arg1)
{
  float new_var2;
  s32 temp_a4;
  void *temp_v0;
  s32 *new_var;
  temp_a4 = *((s32 *) (((char *) arg0) + 0x1C));
  if (((0 != temp_a4) && (arg1 >= 0)) && (arg1 < (*(*((s32 **) (((char *) (*((void **) (((char *) arg0) + 0x18)))) + 0x18))))))
  {
    temp_v0 = arg0 + 0xA414;
    *((s32 *) (((char *) temp_v0) + 0x24)) = 0xA0;
    new_var2 = 0.0f;
    new_var = &D_00353938;
    *((f32 *) (((char *) temp_v0) + 0x1C)) = (f32) (-new_var2);
    *((f32 *) (((char *) temp_v0) + 0x20)) = new_var2;
    *((s32 *) (((char *) temp_v0) + 0x18)) = (s32) ((arg1 * 0x2044) + temp_a4);
    func_00198300((s32) (arg0 + 0x17C), (s32) new_var);
  }
}
}
