extern "C" void func_0027ED70(char *, int, int); extern "C" int func_0026FFC8(); extern "C" int func_00271308(char *, int, int, int); extern "C" int func_002709C0(char *, int);
extern "C" int func_00271490(char *t, int a, int f) { int n = 2; func_0027ED70(t + 0xC, 0, 0x40);
 if (f & 1) { for (;;) { int r = func_00271308(t, a, 16, 0); if (r == func_002709C0(t, a)) break; if (f & 2) return 0; if (func_0026FFC8()) n--; if (!n && (f & 4)) return 0; } }
 else { while (!func_00271308(t, a, 16, 0)) { if (f & 2) return 0; if (func_0026FFC8()) n--; if (!n && (f & 4)) return 0; } }
 func_00271308(t, a, 16, 1); return 1; }

