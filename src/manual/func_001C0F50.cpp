struct N { int x0; N *x4, *x8; };
extern "C" int func_001C0F50(void *a, N *n) { int c = 0; do { c++; if (n->x8) c += func_001C0F50(a, n->x8); n = n->x4; } while (n); return c; }

