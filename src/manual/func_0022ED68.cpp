struct S { char p[0x14]; unsigned x14; char q[0x30 - 0x18]; unsigned x30; char r[0x48 - 0x34]; int x48, x4C, x50, x54, x58, x5C, x60, x64, x68, x6C, x70, x74; };
extern "C" void func_0022ED68(S *s) { int k = s->x14 & 0x1F; if (k != 4 && k != 7) return; unsigned f = s->x30;
 s->x4C = (f & 0x8000) ? 0x80 : 0; s->x48 = (f & 0x2000) ? 0x80 : 0; s->x50 = (f & 0x1000) ? 0x80 : 0; s->x54 = (f & 0x4000) ? 0x80 : 0; s->x58 = (f & 0x10) ? 0x80 : 0; s->x5C = (f & 0x20) ? 0x80 : 0; s->x60 = (f & 0x40) ? 0x80 : 0; s->x64 = f & 0x80; s->x68 = (f & 4) ? 0x80 : 0; s->x6C = (f & 8) ? 0x80 : 0; s->x70 = (f & 1) ? 0x80 : 0; s->x74 = (f & 2) ? 0x80 : 0; }

