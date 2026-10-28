struct T { T(void *, int, float, float); char p[0x18]; float f; char q[0x11C - 0x1C]; };
struct U { char p[0x4C]; float f; };
extern "C" T *func_00139E40(char *a, int b, int c, U *u) {
    char *p = a + 0xDE8;
    T *t = new T(p, 6, 1.0f, 2.0f);
    t->f = u->f;
    return t;
}
