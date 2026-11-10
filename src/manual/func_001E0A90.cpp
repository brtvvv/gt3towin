struct G { char p[0x50]; float x50, x54, x58, x5C, x60; };
struct M { char p[0x436]; unsigned char x436, x437; char q[0x4F4 - 0x438]; float x4F4; };
struct TT { char p[0x244]; float a[2]; };
extern G D_0049E9A8[];
extern "C" float func_001E7B68(char *);
extern "C" float func_001E0A90(char *t, float *o) { M *m = (M *)(t + 0xF84); G *g = D_0049E9A8; if (!((unsigned char *)t)[0x16D0] || !m->x437) { *o = 1.0f; return 0.0f; } float v = m->x4F4; float z = 0.0f; float mx; if (v < z) { mx = g->x58; v = -v; } else mx = g->x58; if (mx < v) v = mx; v = v * ((TT *)t)->a[m->x436] / (mx * *(float *)(t + 0x248)); v = g->x50 + (g->x54 - g->x50) * v; float w = func_001E7B68(t); if (w < z) w = -w; *o = g->x60 + w * g->x5C; return v; }

