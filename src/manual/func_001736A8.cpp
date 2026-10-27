struct B0 { virtual void f(); }; struct X : B0 { int m; X(int v); }; X::X(int v) : m(v) {} // @__1Xi 0x1736A8
