struct V { float x, y, z; };
extern "C" void func_00257F80(V *, V *);
extern "C" void func_00258118(float a, float b, float c, float d, float e, float f) { V p; V q; p.x = a; p.y = b; p.z = c; q.x = d; q.y = e; q.z = f; func_00257F80(&p, &q); }

