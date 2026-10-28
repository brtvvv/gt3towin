struct F { char p[0xD]; unsigned char h; };
struct G { char p[0x78]; F *f; char q[0x24]; float a0; char r[4]; float a8; };
extern G D_002F8900[];
extern "C" float func_0024C640(const signed char *s) { G *g = D_002F8900; int c = *s++; float h = (float)g->f->h * g->a8; float n = 0.0f; while (c) { if (c == '\n') n += 1.0f; c = *s++; } return h + (h + g->a0) * n; }
