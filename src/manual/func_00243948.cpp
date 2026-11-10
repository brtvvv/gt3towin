extern volatile int D_00354948, D_00354944; extern char D_002F5330[]; extern "C" int func_0026AD38(); extern "C" void func_0027FDBC(char *, char *);
extern "C" int func_00243948(char *s, int k) { if (D_00354948) return 0; int r = func_0026AD38(); func_0027FDBC(D_002F5330, s); D_00354944 = k; D_00354948 = 1; if (r) __asm__ volatile("ei"); return 1; }

