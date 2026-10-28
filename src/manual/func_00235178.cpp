struct X { char p[0x10]; unsigned char b; };
struct S { char p[0xC8]; long k; char q[0x100]; char t[1]; };
extern "C" X *func_00232658(void *, int, long);
extern "C" int func_002350C8(S *);
extern "C" int func_00235178(S *s) { int r = 0; if (s->k) r = func_00232658(s->t, 0x14, s->k)->b; return func_002350C8(s) ? r + 4 : r; }

