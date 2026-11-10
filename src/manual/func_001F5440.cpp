struct T { char p[0x14]; int x14; char q[4]; short x1C; };
extern "C" void func_001F5440(T *t) {
    int v = t->x1C, o = t->x14;
    t->x14 = v;
    if ((v < 0 ? -v : v) < 16) return;
    int n = v * 2 - o;
    if (n > 0x1000) n = 0x1000; else if (n < -0x1000) n = -0x1000;
    t->x1C = n;
}

