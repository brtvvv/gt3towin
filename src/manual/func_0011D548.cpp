extern char D_00352B08[];
extern "C" int func_00219680(); extern "C" float func_0021A938(int); extern "C" void func_0024C4D0(char *, char *, int);
extern "C" void func_0011D548(int a, char *b) { float f = func_0021A938(func_00219680()); if (f == 1.0f) { __builtin_strcpy(b, "100.0 %"); return; } int v = (int)(f * 1000.0f); if (v >= 1000) v = 999; func_0024C4D0(b, D_00352B08, v); }

