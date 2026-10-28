struct G { char p[0x1400]; char q[8]; int a; int b; int c; };
extern G *D_003548F8;
extern "C" void func_0026AE48(int), func_0026AF50(void *), func_00286EB0(int), func_0026D5B8(G *);
extern "C" void func_0023FC50(void) {
    G *g = D_003548F8;
    if (!g) return;
    g->c = 1;
    func_0026AE48(g->a);
    func_0026AF50(g->q);
    func_00286EB0(g->a);
    func_00286EB0(g->b);
    func_0026D5B8(D_003548F8);
    D_003548F8 = 0;
}

