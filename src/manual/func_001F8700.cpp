struct G { char p[0xEC0]; float k; };
struct S { char p[4]; G *g; char q[0x64]; float r; char x[0x2C]; float v; };
extern "C" void func_001F8700(S *s, float t) {
    float st = s->r * s->g->k;
    if (s->v < t) { s->v = s->v + st; if (t < s->v) s->v = t; }
    else if (t < s->v) { s->v = s->v - st; if (s->v < t) s->v = t; }
}

