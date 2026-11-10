struct S { unsigned char b[8]; };
extern char D_00349570[], D_00349598[];
void func_0027E9F8(char *, int, char *); int func_00275C28(int);
void func_00275C80(struct S *s) { if (!s) func_0027E9F8(D_00349570, 0x132, D_00349598); s->b[7] = func_00275C28(s->b[7]); s->b[6] = func_00275C28(s->b[6]); s->b[5] = func_00275C28(s->b[5]); s->b[3] = func_00275C28(s->b[3]); s->b[2] = func_00275C28(s->b[2]); s->b[1] = func_00275C28(s->b[1]); }

