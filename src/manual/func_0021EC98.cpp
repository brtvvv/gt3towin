struct X { int p[3]; int v; }; struct L { int p[2]; X **arr; }; extern "C" L *func_0021EB30(void *, int);
extern "C" int func_0021EC98(void *a, int b, int i) { return func_0021EB30(a, b)->arr[i]->v; }

