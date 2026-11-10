struct T { char p[0x18]; int x18, x1C; };
void func_00286EB0(int); void func_0026D5B8(struct T *);
void func_002614F8(struct T *t) { if (t->x18 != -1) { func_00286EB0(t->x18); t->x18 = -1; } func_00286EB0(t->x1C); func_0026D5B8(t); }

