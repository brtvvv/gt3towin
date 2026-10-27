struct A { char p[0x5DC]; int i; }; struct S { char p[0x24C]; A *a; }; extern "C" int func_001D74B0(S *); extern "C" int func_0016D238(S *s) { if (s->a->i) return 0; return func_001D74B0(s); }
