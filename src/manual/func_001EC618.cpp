struct S { int a; void *p4; char q[0x1380]; float f; }; extern "C" int func_001F3EE0(void *); extern "C" float func_001EC618(S *s) { if (func_001F3EE0(s->p4)) return 0.0f; return s->f; }
