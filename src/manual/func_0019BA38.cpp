extern "C" void func_0019BA88(char *, int);
struct T { int x0; T *x4; char p[8]; int x10; char *x14; };
extern "C" void func_0019BA38(T *t) {
    if (!t->x10) { t->x14 = 0; return; }
    int d = (char *)t - (char *)t->x4;
    t->x4 = t;
    if (d && t->x14) { t->x14 += d; func_0019BA88(t->x14, d); }
}

