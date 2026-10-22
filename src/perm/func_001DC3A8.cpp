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
s32 func_001DC1D8(s32, s32);
void func_001DC3A8(void *arg0, s32 arg1)
{
  char *new_var;
  *((f32 *) (((char *) arg0) + 0xDF8)) = (f32) ((((f32) (*((u16 *) (((char *) arg0) + 0x1C4)))) * 0.10471976f) / (*((f32 *) (new_var = ((char *) (arg0 + ((*((u8 *) (((char *) arg0) + 0x1FA))) * 4))) + 0x254))));
  *((f32 *) (((char *) arg0) + 0xE34)) = (f32) ((*((f32 *) (((char *) arg0) + 0x48))) / (2.0f * (2.0f * ((*((f32 *) (((char *) arg0) + 0xE28))) * (*((f32 *) (((char *) arg0) + 0x27C)))))));
  func_001DC1D8((s32) arg0, arg1);
}
}
