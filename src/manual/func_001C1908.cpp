struct P { float a; float b; float c; void set(float v) { a = 0; b = 0; c = v; } };
struct A { char p[0x1C]; virtual ~A(); };
struct B : A { P x; P y; char q[0x100 - 0x38]; B(); };
struct X : B { float w, h, s, w2, h2; X(); void init(); };
X::X() { h = 224.0f; w = 320.0f; w2 = 320.0f; h2 = 224.0f; s = 1.0f; x.set(320.0f); y.set(h); init(); }
// @__1X 0x1C1908
