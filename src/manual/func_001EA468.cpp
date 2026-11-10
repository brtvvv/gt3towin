struct M { char p[0xC]; char xC[0xC]; char x18[0xC]; char x24[0x444]; float x468, x46C, x470; char q[0x4DE - 0x474]; signed char x4DE; char r[0x536 - 0x4DF]; volatile unsigned short x536; };
struct T { int x0; int x4; char p[0xEC0 - 8]; float xEC0; char q[0xF84 - 0xEC4]; M m; };
extern float D_00351EAC;
extern "C" float func_001EA038(int, int *); extern "C" int func_001EA0A0(M *, float); extern "C" float func_001F3E30(int, int); extern "C" float func_001D9B90(float, float); extern "C" void func_001D9990(char *, char *, char *, float, float, float);
extern "C" int func_001EA468(T *t) { M *m = &t->m; float dt = t->xEC0; int k; if (m->x536 && func_001EA0A0(m, func_001EA038(m->x536, &k))) { if (k == 2) { float a = func_001F3E30(t->x4, m->x4DE); float d = func_001D9B90(a, m->x470); if (d != 0.0f) { float s = dt * D_00351EAC; if (s < d) m->x470 += s; else if (d < -s) m->x470 -= s; else m->x470 = a; } } func_001D9990(m->xC, m->x18, m->x24, m->x468, m->x46C, m->x470); return 1; } return 0; }

