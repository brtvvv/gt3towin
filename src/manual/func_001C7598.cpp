struct T { char p[0x160]; int x160; char q[0x474 - 0x164]; void (*x474)(int, int, int); char r[0x48C - 0x478]; int x48C; };
extern "C" int func_001CD888(int *); extern "C" void func_001B3970(int *, int);
extern "C" void func_001C7598(T *t, int b) { int *m = &t->x48C; int ok = !(func_001CD888(m) < 2); if (ok) { func_001B3970(m, b); t->x474(t->x160, t->x48C, 1); } }

