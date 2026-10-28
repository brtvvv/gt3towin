typedef struct { char p[0x18]; int a; int b; } S;
void func_00286EB0(int), func_0026D5B8(S *);
void func_002614F8(S *s) { if (s->a != -1) { func_00286EB0(s->a); s->a = -1; } func_00286EB0(s->b); func_0026D5B8(s); }

