struct S { unsigned st; int cnt; float f; };
extern float D_0035170C, D_00351710;
extern "C" void func_00197840(S *s) { switch (s->st) { case 0: s->st++; s->cnt = 150; case 1: if (--s->cnt < 0) s->st++; break; case 2: s->f += D_0035170C; if (1.0f < s->f) { s->f = 1.0f; s->st++; s->cnt = 1500; } break; case 3: if (--s->cnt < 0) s->st++; break; case 4: s->f -= D_00351710; if (s->f < 0.0f) { s->f = 0.0f; s->st++; } break; case 5: s->st = 1; s->cnt = 1500; break; } }
