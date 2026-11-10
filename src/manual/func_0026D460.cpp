extern int D_00354B68, D_00354B6C, D_00354B70, D_00354B74; extern char D_004AB8C0[];
extern "C" int func_0026AD38(); extern "C" void func_0027ED70(int, int, int); extern "C" void func_0026BC28(char *, int, int);
extern "C" void func_0026D460() { int r = func_0026AD38(); if (!D_00354B68) { int b = (D_00354B70 + 15) & -16; int n = (D_00354B74 - b) & -16; func_0027ED70(b, 0, n); func_0026BC28(D_004AB8C0, b, n); D_00354B68 = b; D_00354B6C = n; } if (r) __asm__ volatile("ei"); }

