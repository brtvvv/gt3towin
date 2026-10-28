struct T { T(const T &); ~T(); T &operator=(const T &); int x; };
struct S { char p[0x70]; T m; };
extern "C" void func_001876E0(S *s, T t) { s->m = t; }

