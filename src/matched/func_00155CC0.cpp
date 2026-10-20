struct A { char pad[0x30764]; float prev; float cur; };
extern "C" void func_00155CC0(A *a, float x) { a->prev = a->cur; a->cur = x * 0.5f + 0.5f; }
