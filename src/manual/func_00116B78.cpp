struct O { char p[0x38]; float x38, x3C; };
struct B0 { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual O *f8(); };
struct T : B0 { char q[0x38 - 0x20]; float x38, x3C; char r[0xBC - 0x40]; int xBC; };
extern "C" float func_001CA7B0(T *); extern "C" float func_001CA950(T *); extern "C" void func_001CA9D0(T *); extern "C" float func_001CA720(T *); extern "C" float func_001CA840(T *); extern "C" void func_001CA8C0(T *);
extern "C" float func_00116B78(T *t) { float w, a, b, r;
 if (!t->xBC) { w = t->x3C; a = func_001CA7B0(t); b = func_001CA950(t); func_001CA9D0(t); } else { w = t->x38; a = func_001CA720(t); b = func_001CA840(t); func_001CA8C0(t); }
 if (w < a) { O *o = t->f8(); float k; if (o) k = !t->xBC ? o->x3C : o->x38; else k = 0.0f; r = w * 0.5f - (b + k * 0.5f); }
 else { r = 0.0f; if (t->xBC) r = (w - a) * 0.5f; }
 return r - w * 0.5f; }

