struct V { char p[0x10]; int x10; char q[0x44]; int x58; };
extern float D_00353B78;
extern "C" char *func_00219680();
#define G ({ V *_g = (V *)(func_00219680() + 0x2FF38); _g; })
extern "C" void func_001A7578(int a) { D_00353B78 = (a ? G->x58 : G->x10) ? 1.0f : 0.0f; }

