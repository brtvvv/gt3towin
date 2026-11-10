struct S { char p[3]; unsigned char x3; };
extern char D_00349570[], D_00349598[];
void func_0027E9F8(char *, int, char *); void func_00275E78(struct S *);
void func_00275FC0(struct S *s) { if (!s) func_0027E9F8(D_00349570, 0x18E, D_00349598); if (s->x3 == 0) { s->x3 = 23; func_00275E78(s); return; } s->x3--; }

