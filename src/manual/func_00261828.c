struct T { char p[0x14]; int x14, x18, x1C; };
void func_00286EE0(int); void func_00286EC0(int);
void func_00261828(struct T *t) { func_00286EE0(t->x1C); if (t->x14 > 0) t->x14--; func_00286EC0(t->x1C); if (t->x18 != -1) func_00286EC0(t->x18); }

