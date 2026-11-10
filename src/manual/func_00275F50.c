struct S { char p[3]; unsigned char x3; };
extern char D_00349570[], D_00349598[];
void func_0027E9F8(char *, int, char *); void func_00275D90(struct S *);
void func_00275F50(struct S *s) { if (!s) func_0027E9F8(D_00349570, 0x181, D_00349598); if (++s->x3 == 24) { s->x3 = 0; func_00275D90(s); } }

