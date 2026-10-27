struct E { E *next; char p[0x50]; }; struct S { E *base; int a; E *head; };
extern "C" void func_0019FEF8(S *s) { s->a = 0; s->head = s->base; for (int i = 0; i < 0x7F; i++) { E *e = &s->base[i]; e->next = e + 1; } s->base[0x7F].next = 0; }

