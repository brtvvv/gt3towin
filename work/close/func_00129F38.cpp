extern "C" void *func_001C36B0(void *, void *);
extern char D_00352C90[];
struct B0 { char p[0x1C]; virtual void f(); };
struct Base : B0 { Base(void *, void *); ~Base(); void set(const char *); char q[0x100 - 0x20]; };
struct T : Base {
    int x; char *a; char *o; int y; char c;
    T(char *aa, char *oo, void *u, void *r) : Base(u, r), x(0), a(aa), o(oo), y(0), c(0) { set(D_00352C90); }
    virtual void f();
};
extern "C" T *func_00129F38(char *o, void *a, int c, void *d) { char *p = o + 0xED8; void *r = func_001C36B0(a, d); return new T(p, o, d, r); }
