extern short D_00307520[]; extern char D_00349520[];
extern "C" int func_00275898(); extern "C" void func_00286F50(int *); extern "C" void func_0026D8C8(char *, int);
extern "C" int func_002759D8() { int r; if (func_00275898()) r = D_00307520[0]; else { int st[4]; func_00286F50(st); r = 0x21C; if (((unsigned)st[0] >> 13) & 7) { r = st[0] >> 21; func_0026D8C8(D_00349520, r); } } return r; }

