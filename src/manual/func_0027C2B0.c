typedef struct { unsigned length; int CIE_delta; void *pc_begin; unsigned pc_range; } fde;
typedef struct { fde **array; unsigned count; } fde_vector;
static inline int fde_compare(fde *x, fde *y) { return (int)x->pc_begin - (int)y->pc_begin; }
void func_0027C2B0(fde_vector *v1, const fde_vector *v2) { unsigned i1, i2; fde *fde2; i2 = v2->count; if (i2) { i1 = v1->count; do { i2--; fde2 = v2->array[i2]; while (i1 > 0 && fde_compare(v1->array[i1 - 1], fde2) > 0) { v1->array[i1 + i2] = v1->array[i1 - 1]; i1--; } v1->array[i1 + i2] = fde2; } while (i2); v1->count += v2->count; } }

