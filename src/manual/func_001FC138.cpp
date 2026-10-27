struct E { unsigned flags; char p[0x40]; }; struct S { char p[0x28]; E e[8]; char q[0x430 - 0x248]; int on; };
extern "C" void func_001FC138(S *s, int on) { if (s->on && !on) { for (int i = 0; i < 8; i++) s->e[i].flags &= 0xFFFFFFFDu; } s->on = on; }

