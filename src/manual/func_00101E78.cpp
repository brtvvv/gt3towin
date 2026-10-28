struct N0 { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();  virtual void g(); }; struct N : N0 { int pad[2]; int c; char q[4]; N *next; };
struct S { void *vt; char p[0x18]; N *head; };
extern char D_00309E38[];
extern "C" void func_00101BD0(S *, int);
extern "C" void func_00101E78(S *s, int b) { s->vt = D_00309E38; for (N *n = s->head; n; n = n->next) { n->g(); n->c = 0; } func_00101BD0(s, b); }
