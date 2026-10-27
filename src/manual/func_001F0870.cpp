struct S { char p[0x13B8]; short h; }; extern "C" int func_001F0840(void *, S *); extern "C" int func_001F0870(void *a, S *s) { if (!s->h) return 0; return func_001F0840(a, s); }
