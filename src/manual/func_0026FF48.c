struct S { char p[0x10C]; int a; int b; char q[0x11C - 0x114]; int h; }; extern struct S D_004ACB40;
void func_00286EE0(int); void func_00286EC0(int);
void func_0026FF48() { struct S *s = &D_004ACB40; func_00286EE0(s->h); s->a = 0; s->b = 0; func_00286EC0(s->h); }

