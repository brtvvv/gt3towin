extern "C" {
void func_001D0258(void *);
void func_001CFE20(void *);
void func_001D1380(void *);
}
extern float D_003519C0;
struct V4 { float r, g, b, a; };
struct P { char p[0x40]; volatile int flags; };
struct S { char p[0x40]; V4 c[4]; char q[0xC4 - 0x80]; int mode; float fC8; int iCC; char r[0xE4 - 0xD0]; P *pp; char s2[0xFC - 0xE8]; int iFC; };
extern "C" void func_001BB4C0(S *s)
{
    P *p = s->pp;
    V4 save[4];
    int i;
    int m = p->flags & 0xF00;
    if (m) switch (m) {
    case 0x100: s->mode = 3; s->fC8 = 8.0f; break;
    case 0x200: s->mode = 1; s->fC8 = 8.0f; break;
    case 0x300: s->mode = 2; s->fC8 = 8.0f; break;
    }
    {
        V4 *q = save;
        i = 4;
        while (i--) {
            q->r = D_003519C0;
            q->g = D_003519C0;
            q->b = D_003519C0;
            q->a = D_003519C0;
            q++;
        }
    }
    if (s->iFC) {
        V4 *c = s->c, *q = save;
        for (i = 0; i < 4; i++, c++, q++) {
            float r = c->r, g = c->g, b = c->b;
            q->r = r;
            q->a = c->a;
            c->r = r * 0.5f;
            c->g = g * 0.5f;
            c->b = b * 0.5f;
            q->g = g;
            q->b = b;
        }
    }
    if ((p->flags & 1) && s->iCC) func_001D0258(s);
    else if (p->flags & 2) func_001CFE20(s);
    else func_001D1380(s);
    if (s->iFC) {
        V4 *c = s->c, *q = save;
        for (i = 0; i < 4; i++, c++, q++) { c->r = q->r; c->g = q->g; c->b = q->b; c->a = q->a; }
    }
}
