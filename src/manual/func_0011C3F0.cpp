// @flags -fexceptions
extern char D_00311660[], D_00311750[], D_00311768[];
extern "C" char *func_00219680();
extern "C" char *func_00219F60(char *);
extern "C" void func_001C5E88(int);
extern "C" int func_00232210(void *);
struct X { int x0, x4; char p[0x14]; X(int, void *); virtual ~X() {} int m(); };
extern "C" char *func_0011C3F0() {
    char *o = func_00219F60(func_00219680());
    if (!o) { func_001C5E88(4); return D_00311660; }
    {
        X t(func_00232210(func_00219680() + 0x3080C), o + 0x10);
        if (!t.m()) {
            func_001C5E88(4);
            if (t.x4) return D_00311750;
            return D_00311768;
        }
    }
    return 0;
}

