struct T { char p[0x18]; int x18; int x1C; int x20; };
int func_00286D90(void); int func_00286D30(int, int); void func_00286EB0(int);
void func_00261590(struct T *t) { int p = func_00286D90(); int o = func_00286D30(p, t->x20); int h = t->x18; if (h != -1) { func_00286EB0(h); t->x18 = -1; } func_00286D30(p, o); }

