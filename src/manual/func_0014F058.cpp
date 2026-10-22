struct E { int a, b, c; char *p; }; struct X { E *e; int n; ~X(); }; X::~X() { for (int i = 0; i < n; i++) if (e[i].p) delete[] e[i].p; if (e) delete[] e; }
// @_$_1X 0x14F058
