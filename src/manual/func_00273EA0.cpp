struct Q { int cmd; int a, b; int r; };
extern Q D_004AD580[];
extern char D_004AD240[];
extern "C" int func_00289DA8(char *, int, int, Q *, int, Q *, int, int, int);
extern "C" int func_00273EA0(void) { Q *q = D_004AD580; q->cmd = 12; if (func_00289DA8(D_004AD240, 1, 0, q, 0x80, q, 0x80, 0, 0) < 0) return 0; return q->r; }

