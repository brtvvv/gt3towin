struct S { char p[0x104]; int obj; int a108; int a10C; int k; char q[0x38]; unsigned int v0, v1, v2; char r[0x80]; unsigned int mn, mx, cur; char z[0x108]; int lim; };
extern "C" {
void func_001BAEA0(S *);
void func_00218908(int, unsigned int, int, int); void func_00218928(int, unsigned int, int, int);
void func_00218948(int, unsigned int, int, int);
void func_00218968(int, unsigned int, int, int); void func_00218988(int, unsigned int, int, int);
void func_002189A8(int, unsigned int, int, int); void func_002189C8(int, unsigned int, int, int);
}
extern "C" void func_0012AAC0(S *s) {
    int t;
    unsigned int v;
    func_001BAEA0(s);
    t = s->obj + 0x638;
    switch (s->k) {
    case 0:
        v = s->v0;
        if (s->mx < v) s->mx = v;
        if (v < s->mn) s->mn = v;
        if (s->lim < (int)(s->mx - s->mn)) { func_00218908(t, s->mn, s->a108, s->a10C); func_00218928(t, s->mx, s->a108, s->a10C); }
        break;
    case 1:
        s->cur = s->v0;
        func_00218948(t, s->cur, s->a108, s->a10C);
        break;
    case 3:
        v = s->v2;
        if (s->mx < v) s->mx = v;
        if (v < s->mn) s->mn = v;
        if (s->lim < (int)(s->mx - s->mn)) { func_002189A8(t, s->mn, s->a108, s->a10C); func_002189C8(t, s->mx, s->a108, s->a10C); }
        break;
    case 2:
        v = s->v1;
        if (s->mx < v) s->mx = v;
        if (v < s->mn) s->mn = v;
        if (s->lim < (int)(s->mx - s->mn)) { func_00218968(t, s->mn, s->a108, s->a10C); func_00218988(t, s->mx, s->a108, s->a10C); }
        break;
    }
}
