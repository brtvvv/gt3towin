struct S { char p[0xEC0]; float k; char q[0x16A8 - 0xEC4]; float t; char r[0x2C]; float v; };
extern float D_00351EF8;
extern "C" void func_001EB7B0(S *s) {
    float t = s->t, st = s->k * D_00351EF8;
    if (s->v < t) { s->v = s->v + st; if (t < s->v) s->v = t; }
    else { s->v = s->v - st; if (s->v < t) s->v = t; }
}

