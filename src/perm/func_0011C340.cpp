extern "C" {

typedef struct E E;
struct E
{
  char *x0;
  int x4;
  int x8;
};
extern E D_00297980;
extern char D_00311740[];
int func_0027FC78(char *, char *);
char *func_00219680();
int func_00216650(char *, int, int);
void func_001C5E88(int);
char *func_0011C340(int a, char *name)
{
  if (D_00297980.x0)
  {
    E *e = &D_00297980;
    do
    {
      e++;
      e--;
      if (!func_0027FC78(e->x0, name))
      {
        if (func_00216650(func_00219680() + 0x1F550, e->x4, 1))
        {
          return 0;
        }
        func_001C5E88(4);
        return D_00311740;
      }
      e++;
    }
    while (e->x0);
  }
  return 0;
}
}
