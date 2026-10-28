struct Bn { unsigned char *p; unsigned n; };
extern "C" Bn *func_0021C8F0(Bn *a, Bn *b) { unsigned c = 0; for (unsigned i = 0; i < a->n; i++) { unsigned char t = b->p[i] + c; if (t < c) continue; unsigned char o = a->p[i]; unsigned char r = o - t; a->p[i] = r; c = o < r; } return a; }
