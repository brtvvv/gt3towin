struct E0 { char p[0x2C]; virtual void d(int); };
struct E : E0 { char q[0x1C]; };
struct T { char p[0x90]; void *vt; E e[3]; };
extern char D_00342888[];
extern "C" void func_00220730(T *, int);
extern "C" void func_00223018(T *t, int c) { t->vt = D_00342888; E *b = t->e; if (b) { E *p = b + 3; if (b != p) { do { p--; p->d(0); } while (b != p); } } func_00220730(t, c); }
