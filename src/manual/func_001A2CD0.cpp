struct M { float m[16]; };
struct E { char p[0xAC]; int xAC; };
struct T { char p[0x10]; float x10, x14, x18; char q[0x44 - 0x1C]; short x44; };
extern E **D_00353B0C; extern volatile float D_00351868;
extern "C" int func_001A2DF8(T *); extern "C" void func_001A2B48(T *, M *); extern "C" void func_001A2B80(T *, M *);
extern "C" void func_00255F40(int); extern "C" void g1(float) asm("func_00256088"); extern "C" void g0() asm("func_00256088");
extern "C" void func_0024C990(float); extern "C" void func_00258EB4(M *); extern "C" void func_00253A98(int); extern "C" void func_00226110(int, int); extern "C" void func_00256108();
extern "C" void func_001A2CD0(T *t) { if (!func_001A2DF8(t)) return; M a, b; func_001A2B48(t, &a); a.m[12] = t->x10; a.m[13] = t->x14; a.m[14] = t->x18; func_001A2B80(t, &b);
 func_00255F40(1); g0(); func_0024C990(D_00351868); func_00255F40(0); g0(); func_00258EB4(&b); func_00258EB4(&a); func_00253A98(0); func_00226110(D_00353B0C[t->x44]->xAC, 1);
 func_00253A98(1); func_00255F40(1); func_00256108(); func_00255F40(0); func_00256108(); g0(); func_00258EB4(&a); func_00226110(D_00353B0C[t->x44]->xAC, 0); func_00256108(); }

