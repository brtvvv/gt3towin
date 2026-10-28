struct T { T(const T &); ~T(); T &operator=(const T &); int x; };
struct S { char p[0x70]; T m; };
extern "C" void func_00182510(S *s, T t) { s->m = t; }

