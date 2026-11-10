typedef struct { char p[0x68]; char m[0x11C - 0x68]; int x11C; } S;
extern S D_004ACB40;
extern void func_00286EE0(int); extern void func_00286EC0(int); extern int func_00289F98(char *); extern void func_00287320(void); extern int func_00289DA8(char *, int, int, int, int, int, int, int, int);
void func_0026FE58(int a) { S *s = &D_004ACB40; char *m = s->m; func_00286EE0(s->x11C); while (func_00289F98(m)) func_00287320(); func_00289DA8(m, (a << 27) | 0xC0000000, 0, 0, 0, 0, 0, 0, 0); func_00286EC0(s->x11C); }

