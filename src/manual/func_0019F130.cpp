struct S { char p[0x28]; int o; }; extern "C" int func_00249EB0(int); extern "C" void func_0019F130(S *s) { s->o += (int)s; func_00249EB0(s->o); }
