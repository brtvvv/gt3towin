extern "C" {

typedef struct T T;
struct T
{
  char *x0;
  int x4;
  int x8;
  int xC;
  int x10;
  int x14;
};
void func_002281E8(int);
void func_00225680(int);
void func_00220470(int);
void func_00220550(int);
void func_00228330(T *t)
{
  int d = ((char *) t) - t->x0;
  t->x0 = (char *) t;
 do { if (t->x4) { t->x4 += d; func_002281E8(t->x4); } } while (0);
  if (t->x8)
  {
    t->x8 += d;
    func_00225680(t->x8);
  }
  if (t->xC)
  {
    t->xC += d;
    func_00220470(t->xC);
  }
  if (t->x10)
  {
    t->x10 += d;
    func_00220550(t->x10);
  }
  if (t->x14)
  {
    t->x14 += d;
  }
}
}
