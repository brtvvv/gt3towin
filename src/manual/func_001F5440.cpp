struct S { char p[0x14]; int prev; char q[4]; short v; };
extern "C" void func_001F5440(S *s) {
    int v = s->v;
    int pr = s->prev;
    s->prev = v;
    int a = v < 0 ? -v : v;
    if (a < 16) return;
    int d = v * 2 - pr;
    if (d > 0x1000) d = 0x1000;
    else if (d < -0x1000) d = -0x1000;
    s->v = d;
}

