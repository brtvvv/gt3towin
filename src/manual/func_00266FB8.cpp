struct S { char p[0x28]; int x28, x2C; void *x30, *x34; int x38; char *x3C, *x40; char q[0x338 - 0x44]; int x338; int x33C; };
extern S D_004AB240; extern char D_004AB5C0[], D_004AB600[], D_00347428[];
extern "C" int func_00286EA0(char *); extern "C" int func_002667E8(S *); extern "C" void func_0026D5B8(void *); extern "C" void func_00267458(); extern "C" void func_002676F8();
extern "C" S *func_00266FB8() { S *s = &D_004AB240; if (s->x33C) return s; s->x3C = D_004AB5C0; s->x40 = D_004AB600; s->x28 = 0x594F4A50; s->x2C = 2; s->x338 = func_00286EA0(D_00347428); if (func_002667E8(s)) { func_0026D5B8(s->x3C); func_0026D5B8(s->x40); func_0026D5B8(s); return 0; } s->x30 = (void *)func_00267458; s->x34 = (void *)func_002676F8; s->x33C = 1; return s; }

