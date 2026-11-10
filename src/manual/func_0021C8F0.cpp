struct B { unsigned char *x0; unsigned x4; };
extern "C" B *func_0021C8F0(B *a, B *b) { unsigned c = 0; for (unsigned i = 0; i < a->x4; i++) { unsigned char s = b->x0[i] + c; if (s < c) continue; unsigned char o = a->x0[i]; unsigned char n = o - s; a->x0[i] = n; c = o < n; } return a; }

