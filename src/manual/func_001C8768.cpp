struct R { char p[0x40]; short x40; };
extern "C" int func_001C82C0(void *); extern "C" int func_001C82F8(void *); extern "C" R *func_001C8288(void *, int);
extern "C" int func_001C8768(void *t) { if (!func_001C82C0(t)) return 0; R *r = func_001C8288(t, func_001C82F8(t)); if (!r) return 0; return r->x40 == 1; }

