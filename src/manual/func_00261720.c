struct T { char p[0xC]; int xC, x10, x14, x18, x1C; };
extern int D_00354AB4;
int func_00286EE0(int); void func_00286EC0(int);
void func_00261720(struct T *t) { func_00286EE0(t->x1C); t->x14++; if (!D_00354AB4 && t->x14 == t->xC) D_00354AB4 = 1; t->x10 = (t->x10 + 1) % t->xC; func_00286EC0(t->x1C); }

