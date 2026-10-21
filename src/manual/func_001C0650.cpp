struct N { char p[4]; N *next; N *child; char q[0x10]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void v4(int); void walk(int a); }; void N::walk(int a) { v4(a); if (child) { N *c = child; do { c->walk(a); } while ((c = c->next)); } }
// @walk__1Ni 0x1C0650
