struct C;
struct A { char p[0x18]; C *x18; };
struct T { char p[8]; short x8, xA; char q[0x20 - 0xC]; unsigned short x20, x22; int x24; };
extern "C" void func_0025B158(unsigned); extern "C" int func_001E1598(C *); extern "C" float func_001EC340(C *, float); extern "C" float func_001EC3D0(C *, float); extern "C" void func_0019F158(int, float *, float *, float, float); extern "C" void func_00193300(void *, float, float);
extern "C" void func_0019F460(T *t, A *a, void *b) { C *c = a->x18; func_0025B158(0x80FFFFFFu); int r = func_001E1598(c); switch (r) { case 1: case 2: func_0025B158(0x40FFFFFFu); case 3: break; default: return; } float z = 0.0f; float u = func_001EC340(c, z); float v = func_001EC3D0(c, z); float xy[2]; func_0019F158(t->x24, &xy[0], &xy[1], u, v); func_00193300(b, (t->x8 + ((short)t->x20 >> 1)) + xy[0], (t->xA + ((short)t->x22 >> 1)) + xy[1]); }

