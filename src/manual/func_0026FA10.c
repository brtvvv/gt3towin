struct S { char p[0x11C]; int h; }; extern struct S D_004ACB40;
void func_00286EE0(int); void func_00270610(void *); void func_00286EC0(int);
void func_0026FA10(void *a) { struct S *s = &D_004ACB40; func_00286EE0(s->h); func_00270610(a); func_00286EC0(s->h); }

