struct Q { long a, b, c; } __attribute__((aligned(1)));
struct Q2 { int d[6]; };
extern Q2 D_0049FE30[], D_0049FE48[]; extern long D_00354518;
extern "C" long func_0025C948(); extern "C" void func_0025C968(Q2 *, long); extern "C" void func_0025CC40(char *, long); extern "C" void func_0025CC80(char *, long); extern "C" int func_0026AD38();
extern "C" void func_0022CAC8() { Q2 *s = D_0049FE30; D_00354518 = func_0025C948(); func_0025C968(s, D_00354518); func_0025CC40((char *)s + 8, D_00354518); func_0025CC80((char *)s + 0x10, D_00354518); int r = func_0026AD38(); D_0049FE48[0] = D_0049FE30[0]; if (r) __asm__ volatile("ei"); }

