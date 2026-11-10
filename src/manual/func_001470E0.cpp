struct L { long d[9]; };
struct B0 { int x0; int x4; virtual ~B0(); }; struct B : B0 { L x10; };
struct X : B { };
extern "C" void func_00146D30(void *, B *); extern "C" int func_00146D00(void *); extern "C" int func_00144A90(int, L *); extern "C" void func_0023D208(void *, int);
extern "C" int func_001470E0(void *t, B *o) { L st = o->x10; if (o && dynamic_cast<X *>(o)) return 1; func_00146D30(t, o); int r = func_00146D00(t); if (!r) return 0; func_0023D208(t, func_00144A90(r, &st)); return 1; }

