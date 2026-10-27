struct X { int m; char p[0xC]; virtual void f(); X(int v); }; X::X(int v) : m(v) {} // @__1Xi 0x26DB08
