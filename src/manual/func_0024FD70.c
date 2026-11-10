struct T { char p[0xC]; int xC; char q[0x20 - 0x10]; unsigned char x20; char r[0xA6E - 0x21]; short xA6E; };
void func_0024FF88(struct T *); void func_00250088(struct T *); void func_00250320(struct T *); void func_0024FA00(struct T *); void func_0024FE58(struct T *); void func_0024FC38(struct T *); void func_0024FAD0(struct T *);
void func_0024FD70(struct T *t) { if (t->x20 & 1) func_0024FF88(t); if (t->x20 & 2) func_00250088(t); if (t->x20 & 4) func_00250320(t); if ((t->x20 & 0x18) != 0x18) { func_0024FA00(t); return; } if (t->x20 & 0x40) { if (t->xA6E < 2) { func_0024FE58(t); return; } t->xC = 0x4E; return; } if (t->xA6E < 3) { func_0024FC38(t); return; } func_0024FAD0(t); }

