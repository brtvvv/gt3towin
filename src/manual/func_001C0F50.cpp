struct N { int a; N *next; N *child; };
extern "C" int func_001C0F50(void *ctx, N *n) { int c = 0; do { c++; if (n->child) c += func_001C0F50(ctx, n->child); n = n->next; } while (n); return c; }

