extern char D_0033DC48[], D_002D3F48[];
extern "C" void func_001DAA20(char *); extern "C" void func_001DB218(char *, int, int, int, int, char *); extern "C" void func_001DCEE8(char *, char *, int, int, char *, char *); extern "C" void func_001E2418(char *, char *, char *);
extern "C" float func_001DA7E0(int a) { char b[0x1350]; char st[0x20]; func_001DAA20(st); func_001DB218(b, a, 0, 0, 0, D_0033DC48); func_001DCEE8(b + 0x3F0, b, 0, 0, D_002D3F48, st); func_001E2418(b + 0x528, b + 0x12A0, st); float n = *(float *)(b + 0x438) * 300.0f; float v = *(float *)(b + 0x12A0); return n / (v * v); }

