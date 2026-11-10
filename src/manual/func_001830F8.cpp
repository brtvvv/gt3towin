extern char D_0032A478[];
struct T { char *vp; };
extern "C" void func_00182E30(T *, int); extern "C" void func_00183000(T *, int);
extern "C" void func_001830F8(T *t, int fl) { t->vp = D_0032A478; func_00182E30(t, 0); if (fl & 1) func_00183000(t, 0x34580); }

