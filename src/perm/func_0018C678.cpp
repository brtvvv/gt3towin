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
s32 func_0018BC00(s32);
void func_0022AF38(s32);
void func_0018C678(void *arg0)
{
  func_0022AF38(*((s32 *) (((char *) arg0) + 0x208)));
  *((s32 *) (((char *) arg0) + 8)) = (s32) ((*((s32 *) (((char *) arg0) + 8))) - 1);
  func_0018BC00((s32) (arg0 + 0x28));
}
}
