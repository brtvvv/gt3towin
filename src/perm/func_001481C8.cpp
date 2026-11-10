extern "C" {

typedef struct T T;
struct T
{
  int x0;
  int x4;
  char q[0xFB64 - 8];
  int xFB64;
  int xFB68;
  char r[0xFB98 - 0xFB6C];
  int xFB98;
  int xFB9C;
  int xFBA0;
  int xFBA4;
  int xFBA8;
};
void func_0014F100(char *);
void func_00146A90(char *);
void func_001481C8(T *t)
{
  t->xFB9C = 1;
  t->xFB98 = 0;
  t->x4 = 0;
  t->xFBA0 = 0;
  t->xFBA4 = 0;
  t->xFBA8 = 0;
  t->xFB64 = -1;
  t->xFB68 = -1;
  func_0014F100(((char *) t) + 0xFA08);
  func_00146A90(((char *) t) + 0xFA64);
}
}
