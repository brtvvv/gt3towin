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
s32 func_00258150(s32, s32);
void func_00250F08(void *arg0, s32 arg1, s32 arg2)
{
  int new_var;
  void *temp_a2;
  if ((*((s32 *) (((char *) arg0) + 0x18))) != 0xC0C0C0C0)
  {
    func_00258150((s32) arg0, -0x3F3F3F40);
  }
  arg2 = (arg2 + 1) & (~1);
  temp_a2 = *((void **) (((char *) arg0) + 0x118));
  new_var = 0;
  *((void **) (((char *) arg0) + 0x118)) = (void *) (temp_a2 + 0x10);
  *((s32 *) (((char *) temp_a2) + new_var)) = (s32) ((arg2 >> 1) | 0x30000000);
  *((s32 *) (((char *) temp_a2) + 4)) = (s32) (arg1 & 0x0FFFFFFF);
  *((s32 *) (((char *) temp_a2) + 0xC)) = (s32) ((arg2 << 0x10) | 0x7400C040);
  *((s32 *) (((char *) temp_a2) + 8)) = new_var;
}
}
