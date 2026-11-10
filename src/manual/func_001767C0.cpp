struct B { char p[8]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual int g(); };
extern char D_002F2F98[], D_00353760[], D_00327D60[]; extern char *D_002C5A40[];
extern "C" void func_0023C9B0(char *, int); extern "C" void func_0023DE20(char *, int); extern "C" int func_0023DC50(char *, char *); extern "C" void func_00176550(B *, char *, int, int, int, int, unsigned, unsigned);
extern "C" void func_001767C0(B *t) { char buf[0x40]; func_0023C9B0(buf, t->g()); func_0023DE20(D_002F2F98, 0); func_0023DC50(D_002F2F98, D_00353760); func_00176550(t, D_002C5A40[0], 200, 270, 2, 2, 0x801880D0u, 0x80000000u); func_0023DE20(D_002F2F98, 2); func_0023DC50(D_002F2F98, D_00327D60); func_00176550(t, buf, 0x1B8, 270, 2, 2, 0x801880D0u, 0x80000000u); }

