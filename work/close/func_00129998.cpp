extern "C" void *func_001C36B0(void *, void *);
extern char D_00352C90[];
struct Base { char p[0x1C]; virtual void f(); Base(void *, void *); ~Base(); void set(const char *); char q[0x100 - 0x20]; };
extern "C" void func_00129968(char *);
struct T : Base {
    char *a; char *o; int x; int y; char c, d;
    T(char *aa, char *oo, void *u, void *r) : Base(u, r) { a = aa; o = oo; y = 100; x = 0; c = 0; d = 0; set(D_00352C90); func_00129968(a); }
    virtual void f();
};
extern "C" T *func_00129998(char *o, void *a, int c, void *d) { char *p = o + 0xEF8; void *r = func_001C36B0(a, d); return new T(p, o, d, r); }
