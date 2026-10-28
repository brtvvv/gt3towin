typedef struct { char p[0xB4]; int a; int b; int h; } E;
extern E D_004AB680[];
void func_00266E78(int), func_00286EB0(int), func_0027ED70(void *, int, int);
void func_00268188(int i) { E *e = &D_004AB680[i]; if (!e->b) return; if (e->a) func_00266E78(e->a); func_00286EB0(e->h); func_0027ED70(e, 0, 0xC0); }
