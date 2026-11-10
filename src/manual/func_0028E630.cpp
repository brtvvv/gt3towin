struct P { union { struct { unsigned long op : 8; unsigned long f : 24; unsigned long r : 32; } h; struct { int a; int x4; } w; }; int x8; int xC; int len; int x14; char name[0x50]; };
struct Q { P *p; int x4; int n1; int n2; };
extern P D_004B2B40[]; extern "C" void func_00287170(); extern "C" int func_002872B0(unsigned); extern "C" void func_002894B8(P *, int); extern "C" int func_00287260(Q *, int); extern "C" void func_002872A0(unsigned, int);
#define G D_004B2B40
extern "C" int func_0028E630(char *s, int a) { func_00287170(); int h = func_002872B0(0x80000000); int i; G->x14 = a; for (i = 0; s[i]; i++) G->name[i] = s[i]; G->w.x4 = 0; G->len = i; G->x8 = 0x80000003; G->h.f = 0; G->h.op = 0x68;
 Q q; q.x4 = h; q.n1 = 0x68; q.n2 = 0x44; q.p = G; func_002894B8(G, 0x68); if (func_00287260(&q, 1)) { func_002872A0(4, 0x10000); func_002872A0(4, 0x20000); func_002872A0(0x80000002, 0); func_002872A0(0x80000000, 0); return 1; } return 0; }

