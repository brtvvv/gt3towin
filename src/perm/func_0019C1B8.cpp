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
void func_00245530(s32, s32);
void func_0026D5B8(s32);
void func_0027D2F8(s32);
extern s32 D_00330B60 __attribute__((section(".data")));
inline s32 *inline_fn(void *arg0)
{
  return (s32 *) (((char *) arg0) + 0x80);
}

void func_0019C1B8(void *arg0, s32 arg1)
{
  s32 temp_a0;
  s32 temp_a0_2;
  *((s32 **) (((char *) arg0) + 0x23FC)) = &D_00330B60;
  func_0026D5B8(*((s32 *) (((char *) arg0) + 0x88)));
  temp_a0 = *((s32 *) (((char *) arg0) + 0x84));
  if (temp_a0 != 0)
  {
    func_0026D5B8(temp_a0);
  }
  temp_a0_2 = *inline_fn(arg0);
  if (temp_a0_2 != 0)
  {
    func_0026D5B8(temp_a0_2);
  }
  func_0026D5B8(*((s32 *) (((char *) arg0) + 0x7C)));
  func_00245530((s32) (arg0 + 0xC4), 2);
  func_00245530((s32) (arg0 + 0x8C), 2);
  if (arg1 & 1)
  {
    func_0027D2F8((s32) arg0);
  }
}
}
