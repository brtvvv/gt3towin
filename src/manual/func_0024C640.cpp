struct F { char p[0xD]; unsigned char xD; };
struct G { char p[0x78]; F *x78; char q[0x24]; float xA0; float xA4; float xA8; };
extern G D_002F8900;
extern "C" float func_0024C640(char *s) { G *g = &D_002F8900; float h = g->x78->xD * g->xA8; float n = 0.0f; char c = *s++; while (c) { if (c == '\n') n += 1.0f; c = *s++; } return h + (h + g->xA0) * n; }

