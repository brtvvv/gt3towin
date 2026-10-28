struct T { void *vt; };
extern char D_0032A0E0[], D_002EBE28[];
extern "C" void func_0022FBE8(char *, char *), func_00211550(char *, int), func_001820A0(T *, int), func_00182590(T *, int);
extern "C" void func_00182718(T *t, int c) { t->vt = D_0032A0E0; char *m = (char *)t + 0x16D40; func_0022FBE8(D_002EBE28, m); func_00211550(m, 2); func_001820A0(t, 0); if (c & 1) func_00182590(t, 0x16EC0); }
