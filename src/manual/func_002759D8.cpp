extern short D_00307520[];
extern char D_00349520[];
extern "C" int func_00275898(void);
extern "C" void func_00286F50(unsigned *), func_0026D8C8(char *, int);
extern "C" int func_002759D8(void) { int r; if (func_00275898()) r = D_00307520[0]; else { unsigned t; r = 0x21C; func_00286F50(&t); if ((t >> 13) & 7) { r = (int)t >> 21; func_0026D8C8(D_00349520, r); } } return r; }

