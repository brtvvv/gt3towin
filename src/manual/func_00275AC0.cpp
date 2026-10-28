struct L { unsigned st; unsigned char b[4]; };
extern unsigned char D_00307526[];
extern char D_00349548[];
extern "C" int func_00275898(void), func_002871B0(unsigned char *, int, int);
extern "C" void func_00286F50(L *), func_0026D8C8(char *, int);
extern "C" int func_00275AC0(void) { L l; int r; if (func_00275898()) r = D_00307526[0]; else { func_00286F50(&l); if (!((l.st >> 13) & 7)) r = 0; else { func_002871B0(l.b, 1, 1); r = (l.b[0] >> 4) & 1; func_0026D8C8(D_00349548, r); } } return r; }
