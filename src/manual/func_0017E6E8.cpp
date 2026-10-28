// @__1T 0x17E6E8
struct Bs { Bs(); ~Bs(); int a; virtual void v(); };
struct M { M(); char p[0x410]; };
struct T : Bs { virtual void v(); int x8; char p[0x18C]; M m1; M m2; void init(float); T(); };
T::T() { x8 = 0; init(1.0f); }
