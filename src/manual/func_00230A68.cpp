struct C { unsigned char c[0x20]; };
struct E { C c; char p[0x37]; unsigned char x57; char q[5]; };
extern E D_004A238C[];
extern "C" int func_00230A68(int i, C *o) { E *e = &D_004A238C[i]; *o = e->c; int r = 0; if (e->x57) r = e->c.c[1]; return r; }

