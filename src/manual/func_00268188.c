struct E { char p[0xB4]; int xB4; int xB8; int xBC; };
extern struct E D_004AB680[];
void func_00266E78(int); void func_00286EB0(int); void func_0027ED70(void *, int, int);
void func_00268188(int i) { struct E *e = &D_004AB680[i]; if (!e->xB8) return; if (e->xB4) func_00266E78(e->xB4); func_00286EB0(e->xBC); func_0027ED70(e, 0, 0xC0); }

