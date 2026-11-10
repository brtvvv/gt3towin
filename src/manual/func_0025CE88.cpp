struct T { int x0; char p[0x38]; int x3C; char q[0x50 - 0x40]; int x50, x54; char *x58; int x5C; char r[0x80 - 0x60]; char x80[0x40]; };
extern int D_00354A80;
extern "C" void func_00286EE0(int); extern "C" void func_002876F0(char *, char *); extern "C" void func_0025C420(T *, int, int, char *, int); extern "C" void func_0026AE48(int);
extern "C" void func_0025CE88(T *t, char *p, int a, int n, int b) { func_00286EE0(D_00354A80); func_00286EE0(t->x0); t->x50 = a; t->x5C = b; t->x54 = n; t->x58 = p; t->x3C = 1; func_002876F0(p, p + n); func_0025C420(t, 3, 1, t->x80, 0x40); func_0026AE48(D_00354A80); }

