#define F(o) (*(int *)(t + (o)))
struct R { char a, b; signed char c; };
extern float D_003522B8; extern "C" void func_0027ED70(char *, int, int); extern "C" R *func_0020F9A0(int); extern "C" void func_0021BBD0(char *); extern "C" void func_00218578(char *);
extern "C" void func_00219260(char *t) { F(0x0) = 0; F(0x30) = 0; F(0x34) = 0; F(0x3C) = 0; F(0x44) = 0; F(0x4C) = 0; F(0x64) = 0; F(0x68) = 0; F(0x4) = 1; F(0x8) = 1; F(0xC) = 1; F(0x10) = 1; F(0x54) = 1; F(0x58) = 1; F(0x14) = 1; F(0x18) = 1; F(0x1C) = 2; F(0x20) = 1; F(0x24) = 1; F(0x28) = 1; F(0x5C) = 1; F(0x60) = 1; F(0x38) = 1; F(0x40) = 1; F(0x48) = 1; F(0x2C) = 2; F(0x50) = 1; func_0027ED70(t + 0x6C, 0, 100); F(0xD0) = 0; for (int i = 0; i < 16; i++) ((int *)(t + 0xD4))[i] = func_0020F9A0(i > 3 ? 0 : i)->c;
 F(0x120) = 0; F(0x118) = 0; F(0x11C) = 0; *(float *)(t + 0x114) = D_003522B8; func_0027ED70(t + 0x124, 0, 0x100); func_0021BBD0(t + 0x228); func_00218578(t + 0x638); }

