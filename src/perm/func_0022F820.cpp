extern "C" {

typedef struct A A;
typedef struct B B;
typedef struct D D;
typedef struct C C;
typedef struct T T;
struct A
{
  char p[0x3C];
};
struct B
{
  char p[0x74];
};
struct D
{
  char p[0xD0];
};
struct C
{
  int x0;
  int x4;
  A *x8;
  B *xC;
};
struct T
{
  int x0;
  A a[8];
  B b[2];
  char q[0x2CC - 0x2CC];
  C c[2];
  D d[8];
  char r[(0x970 - 0x2EC) - 0x680];
  int x970;
};
extern char D_002EC7A0[];
int func_0026AD68(int);
void func_00230890();
void func_00230BE0(A *, int);
void func_00231870(B *, int);
void func_0022F4F0(D *, int, C *);
void func_0022EC28(char *);
void func_0022F820(T *t)
{
  int i;
  B *new_var;
  t->x970 = func_0026AD68(1);
  func_00230890();
  new_var = &t->b[0];
  for (i = 0; i < 8; i++)
  {
    func_00230BE0(&t->a[i], i);
  }

  for (i = 0; i < 2; i++)
  {
    func_00231870(&t->b[i], i);
  }

  C *c0 = &t->c[0];
  C *c1 = &t->c[1];
  c0->x8 = &t->a[0];
  c0->xC = new_var;
  c1->x8 = &t->a[4];
  c1->xC = &t->b[1];
  for (i = 0; i < 8; i++)
  {
    func_0022F4F0(&t->d[i], i, c0);
  }

  t->x0 = 0;
  func_0022EC28(D_002EC7A0);
}
}
