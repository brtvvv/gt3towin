struct Node { Node *next; };
struct A { char p[0x38]; float f; char q[0xC4]; };
struct T : A, Node { };
struct It { Node *cur; Node **head; It(Node **h) : cur(*h), head(h) {} T *next() { Node *n = cur; cur = n ? n->next : 0; return static_cast<T *>(n); } };
struct S { char p[0xB0]; Node *head; char q[0x40]; float k; };
extern "C" int func_0023D4B8(Node **);
extern "C" float func_001CA720(S *s) { float sum = 0.0f; It it(&s->head); It *ip = &it; T *t; while ((t = ip->next())) sum += t->f; int n = func_0023D4B8(&s->head); return sum + s->k * (float)(n - 1); }
