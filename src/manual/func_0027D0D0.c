typedef struct { unsigned length; int CIE_delta; void *pc_begin; unsigned pc_range; } fde;
typedef struct { fde **array; unsigned count; } fde_vector;
static inline int fde_compare(fde *x, fde *y) { return (int)x->pc_begin - (int)y->pc_begin; }
void func_0027D0D0(fde_vector *linear, fde_vector *erratic) { unsigned count = linear->count; unsigned linear_max = (unsigned)-1; unsigned previous_max[count]; unsigned i, j;
 for (i = 0; i < count; i++) { for (j = linear_max; j != (unsigned)-1 && fde_compare(linear->array[i], linear->array[j]) < 0; j = previous_max[j]) { erratic->array[erratic->count++] = linear->array[j]; linear->array[j] = (fde *)0; } previous_max[i] = j; linear_max = i; }
 for (i = 0, j = 0; i < count; i++) if (linear->array[i] != (fde *)0) linear->array[j++] = linear->array[i];
 linear->count = j; }

