struct E { char d[0x38]; };
extern char D_002F5860[];
extern "C" void func_00245530(void *, int); extern "C" void func_00244960(char *, int);
extern "C" void func_002445C0() { char *g = D_002F5860; func_00245530(g + 0xB38, 2); E *b = (E *)(g + 0xAC4); if (b) { E *e = b + 2; while (b != e) { e--; func_00245530(e, 0); } } b = (E *)(g + 0xA50); if (b) { E *e = b + 2; while (b != e) { e--; func_00245530(e, 0); } } func_00244960(g + 0x20, 2); }

