extern "C" {

typedef struct T T;
struct T
{
  char p[0xC];
  int xC;
  float x10;
  float x14;
  int x18;
  int x1C;
};
void func_00175548(T *);
inline T *inline_fn(T *arg0)
{
  return arg0;
}

void func_001763C8(T *t, int a, int b)
{
 do { func_00175548(t); t->xC = b == 0; t->x10 = 5.0f; t->x14 = 10.0f; } while (0);
  if (t)
  {
    t->x18 = 0;
    inline_fn(t)->x1C = 0;
  }
  else
  {
    t->x18 = 0;
    inline_fn(t)->x1C = 0;
  }
}
}
