struct B { unsigned char *p; unsigned n; unsigned char at(unsigned i) { if (i < n) return p[i]; return 0; } };
extern "C" int func_0021C9F8(B *a, B *b) { unsigned n = a->n; if (n < b->n) n = b->n; for (unsigned i = 0; i < n; i++) { unsigned char x = a->at(i); unsigned char y = b->at(i); if (x != y) return 0; } return 1; }
