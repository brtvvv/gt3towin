struct N { short next; short x; char p[8]; float a; float b; char q[0x2C]; };
struct L { N *n; short head; };
extern float D_0035188C;
extern "C" int func_001A5940(L *l) {
    float best = D_0035188C;
    int r = 0;
    for (int i = l->head; i >= 0; ) {
        N *e = &l->n[i];
        float v = e->b * e->a;
        int nx = e->next;
        if (v < best) { r = i; best = v; }
        i = nx;
    }
    return r;
}
