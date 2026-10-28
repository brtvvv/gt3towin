struct N { char p[0x14]; N *next; };
struct G { char p[0x28]; N *head; };
extern G D_004B1340[];
extern "C" int func_0028E8E0(void); extern "C" void func_0028E928(void);
extern "C" N *func_0028A1D8(N *x) { func_0028E8E0(); G *g = D_004B1340; N *n = g->head; if (n == x) g->head = x->next; else { while (n) { if (n->next == x) { n->next = x->next; break; } n = n->next; } } func_0028E928(); return n; }
