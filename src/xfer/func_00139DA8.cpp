struct T { T(void *, int, float, float); char p[0x18]; float f; char q[0x11C - 0x1C]; };
struct U { char p[0x4C]; float f; };
extern "C" T *func_00139DA8(char *a, int b, int c, U *u) {
    char *p = a + 0xDE8;
    T *t = new T(p, 4, 3.0f, 1.5f);
    t->f = u->f;
    return t;
}
