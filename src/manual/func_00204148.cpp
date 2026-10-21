struct B { virtual void f(); B(); }; struct X : B { char a, b; char p[0xFE]; int magic; X(); }; X::X() { magic = 0x87654321; a = 4; b = 4; }
// @__1X 0x204148
