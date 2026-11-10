struct B { char p[0xE3A8]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18();  virtual void g(int, char *); };
struct C { char p[0x3E9]; signed char x3E9; unsigned char x3EA; char q[0x522 - 0x3EB]; unsigned char x522; char r[0x534 - 0x523]; unsigned char x534; char s[1]; unsigned short x536; };
struct T { char p4[4]; B *b; char p8[4]; int xC; char q[0xEC8 - 0x10]; char xEC8[0xF84 - 0xEC8]; C c; };
extern "C" void func_00211688(int, char *); extern "C" void func_001E51D0(C *, char *); extern "C" void func_001E5BF0(T *, char *); extern "C" void func_001F7590(char *); extern "C" void func_001E4508(T *, char *); extern "C" void func_001F74D0(char *); extern "C" void func_001E5C30(T *);
extern "C" void func_001E5C78(T *t) { char b[0x10]; C *c = &t->c; func_00211688(t->xC, b); if (!c->x3EA) t->b->g(t->xC, b); c->x522 = 1;
 switch (c->x3E9) { case 0: func_001E51D0(c, b); if (!c->x534 || c->x536) { func_001E5BF0(t, b); func_001F7590(t->xEC8); } else { func_001E4508(t, b); func_001F74D0(t->xEC8); func_001E5C30(t); } break;
 case 1: func_001E51D0(c, b); func_001E4508(t, b); func_001E5C30(t); break; case 2: func_001E4508(t, b); func_001E5C30(t); break; } }

