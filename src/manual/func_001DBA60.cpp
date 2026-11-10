struct G { char p[0x9C]; unsigned char x9C, x9D, x9E, x9F, xA0, xA1, xA2, xA3, xA4, xA5, xA6, xA7, xA8; };
extern G D_002D3E70[]; extern float D_00351AD4;
extern "C" void func_001DBA60(float *o) { G *g = D_002D3E70; if (g->x9C) return; float k = D_00351AD4; o[1] = g->xA1 * k; o[0] = -(float)(g->xA0 * 10000); o[2] = g->xA2 * 10000; o[3] = g->xA3 * 10000; int a4 = g->xA4; o[3] += o[2]; o[4] = a4 * k; o[6] = g->xA6 * k; o[5] = -(float)(g->xA7 * 10000); o[7] = (g->xA5 + g->xA7) * 10000; o[8] = g->xA8 * 10000; g->x9C = 1; }

