#define F(o) (*(float *)((char *)t + o))
#define I(o) (*(int *)((char *)t + o))
#define B(o) (*(char *)((char *)t + o))
extern float D_00353B7C;
extern "C" char *func_00219680();
struct G { char p[0x114]; float a, b; };
extern "C" void func_00208C10(char *t) {
 I(0x274) = -1; I(0x248) = 0; F(0x26C) = 0.5f; F(0x23C) = 0.0f; F(0x240) = 0.0f; F(0x244) = 1.0f; F(0x24C) = 0.0f; F(0x250) = 0.0f; F(0x254) = 0.0f; F(0x258) = 1.0f;
 F(0x25C) = 0.0f; F(0x260) = 0.0f; F(0x264) = 0.0f; F(0x268) = 0.0f; F(0x270) = 0.0f;
 B(0x9628) = 0; B(0x962A) = 0; B(0x962B) = 0; B(0x9629) = 0; B(0x962D) = 0; I(0x9638) = 50; B(0x962C) = 1; B(0x962E) = 1;
 G *g = (G *)(func_00219680() + 0x2FF38); F(0x9630) = g->a; F(0x9634) = g->b;
 if (F(0x9630) < 0.0f) F(0x9630) = 0.0f; if (1.0f < F(0x9630)) F(0x9630) = 1.0f;
 if (F(0x9634) < 0.0f) F(0x9634) = 0.0f; if (1.0f < F(0x9634)) F(0x9634) = 1.0f;
 D_00353B7C = 1.0f; I(0x960C) = 0; I(0x9618) = 0; I(0x9614) = 0; }

