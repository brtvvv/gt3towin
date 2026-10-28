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
void func_00105228(s32);
void func_0010C030(void *arg0)
{
  *((s32 *) (((char *) arg0) + 0x3AD0)) = 0;
  *((s32 *) (((char *) arg0) + 0x3AD8)) = 0;
  *((s32 *) (((char *) arg0) + 0x3ADC)) = 0;
  *((s32 *) (((char *) arg0) + 0x3AE0)) = 0;
  func_00105228((s32) arg0);
  *((s32 *) (((char *) arg0) + 0x3B30)) = 0;
  *((s32 *) (((char *) arg0) + 0x3A48)) = 0;
  *((s32 *) (((char *) arg0) + 0x3AE8)) = 0;
  *((s32 *) (((char *) arg0) + 0x3AEC)) = 0;
  *((s32 *) (((char *) arg0) + 0x3AF0)) = 0;
  *((s32 *) (((char *) arg0) + 0x3AF4)) = 0;
  *((s32 *) (((char *) arg0) + 0x3AF8)) = 0;
  *((s32 *) (((char *) arg0) + 0x3AFC)) = 0;
  *((s32 *) (((char *) arg0) + 0x3B00)) = 0;
  *((s32 *) (((char *) arg0) + 0x3B04)) = 0;
  *((s32 *) (((char *) arg0) + 0x3B08)) = 0;
  *((s32 *) (((char *) arg0) + 0x3B0C)) = 0;
  *((s32 *) (((char *) arg0) + 0x3B10)) = 0;
 do { *((s32 *) (((char *) arg0) + 0x3B14)) = 0; *((s32 *) (((char *) arg0) + 0x3B18)) = 0; *((s32 *) (((char *) arg0) + 0x3B3C)) = 0; *((s32 *) (((char *) arg0) + 0x3B1C)) = 0; *((s32 *) (((char *) arg0) + 0x3B20)) = 0; *((s32 *) (((char *) arg0) + 0x3B24)) = 0; *((s32 *) (((char *) arg0) + 0x3B28)) = 0; *((s32 *) (((char *) arg0) + 0x3B34)) = 0; *((s32 *) (((char *) arg0) + 0x3B38)) = 0; } while (0);
  *((s32 *) (((char *) arg0) + 0x3B2C)) = 0;
}
}
