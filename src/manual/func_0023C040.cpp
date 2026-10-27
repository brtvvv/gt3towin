struct S { char p[0x10]; char x10[0x218]; int i228; }; extern "C" int func_00235520(void *); extern "C" int func_0023C040(S *s) { if (!s->i228) return 0; return func_00235520(s->x10); }
