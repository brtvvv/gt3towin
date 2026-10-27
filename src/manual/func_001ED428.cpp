struct S { char p[0x6C]; int a; char q[0xC]; int b; }; extern "C" int func_001ED428(S *s, unsigned char *t) { if (t[0xB7AC] || s->b) return 1; return s->a != 0; }
