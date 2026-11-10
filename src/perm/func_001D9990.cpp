extern "C" {

typedef struct V V;
struct V
{
  float x;
  float y;
  float z;
};
float func_0026B828(float);
float func_0026B3D8(float);
void func_001D9990(V *a, V *b, V *c, float x, float y, float z)
{
  float sx = func_0026B828(x);
  float cx = func_0026B3D8(x);
  float new_var;
  float sy = func_0026B828(y);
  float cy = func_0026B3D8(y);
  float sz = func_0026B828(z);
  float cz = func_0026B3D8(z);
  b->x = cz * cy;
  new_var = (sz * sy) * cx;
  b->y = sz * cy;
  b->z = -sy;
  a->z = cy * sx;
  a->x = ((cz * sy) * sx) - (sz * cx);
  a->y = ((sz * sy) * sx) + (cz * cx);
  c->z = cy * cx;
  c->x = ((cz * sy) * cx) + (sz * sx);
  c->y = new_var - (cz * sx);
}
}
