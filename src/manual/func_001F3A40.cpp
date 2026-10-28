struct S { char *o; char p[0xB7AA]; unsigned short c; };
extern "C" void func_0017A100(void *, int, int, int);
extern "C" void func_001F3A40(S *s) { if (s->c) { if (--s->c == 0) func_0017A100(s->o + 0x84, 1, 0, 0); } }

