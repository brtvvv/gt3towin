// @flags -fexceptions
extern char D_00311660[], D_00311788[], D_00311798[];
extern "C" char *func_00219680();
extern "C" char *func_00219F60(char *);
extern "C" void func_001C5E88(int);
extern "C" int func_00232210(void *);
extern "C" int func_00238C20(char *, int);
struct X { char d[0x30]; X(); void m(int); int m2(int); ~X(); };
extern "C" char *func_0011C4E0(void *p0, void *p1) {
    char *o = func_00219F60(func_00219680());
    if (!o) { func_001C5E88(4); return D_00311660; }
    X t;
    t.m(func_00232210(D_00311788));
    if (t.m2(func_00232210(p1)) == 2 && !func_00238C20(o + 0x10, 0x42)) { func_001C5E88(4); return D_00311798; }
    return 0;
}

