extern "C" int func_0026ACA0(const char *);
extern "C" int func_0023C850(const char *a, const char *b) { int la = func_0026ACA0(a); int lb = func_0026ACA0(b); for (int i = 0; ; i++) { if (i >= la || i >= lb) return la < lb; if (a[i] < b[i]) return 1; if (b[i] < a[i]) return 0; } }

