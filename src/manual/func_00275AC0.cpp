extern unsigned char D_00307526[]; extern char D_00349548[];
extern "C" int func_00275898(); extern "C" void func_00286F50(int *); extern "C" int func_002871B0(int *, int, int); extern "C" void func_0026D8C8(char *, int);
extern "C" int func_00275AC0() { int r; if (func_00275898()) r = D_00307526[0]; else { int st[4]; func_00286F50(st); if (!(((unsigned)st[0] >> 13) & 7)) r = 0; else { func_002871B0(&st[1], 1, 1); r = (((unsigned char *)st)[4] >> 4) & 1; func_0026D8C8(D_00349548, r); } } return r; }


