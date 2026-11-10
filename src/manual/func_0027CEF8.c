typedef struct { unsigned length; int CIE_delta; void *pc_begin; unsigned pc_range; } fde;
struct cie_info { char *augmentation; void *eh_ptr; int code_align; int data_align; unsigned ra_regno; };
struct frame_state { void *cfa; void *eh_ptr; long cfa_offset; long args_size; long reg_or_offset[80]; unsigned short cfa_reg; unsigned short retaddr_column; char saved[80]; };
struct frame_state_internal { struct frame_state s; struct frame_state_internal *saved_state; };
fde *func_0027C828(void *); void *func_0027C910(fde *, struct cie_info *); void *func_0027ED70(void *, int, unsigned); void *func_0027CA18(void *, struct frame_state_internal *, struct cie_info *, void **); void *func_0027C218(void *, int *);
static inline void *get_cie(fde *f) { return (char *)&f->CIE_delta - f->CIE_delta; }
static inline fde *next_fde(fde *f) { return (fde *)((char *)f + f->length + sizeof(f->length)); }
struct frame_state *func_0027CEF8(void *pc_target, struct frame_state *state_in) { fde *f; void *insn, *end, *pc; struct cie_info info; struct frame_state_internal state;
 f = func_0027C828(pc_target); if (f == 0) return 0;
 insn = func_0027C910(f, &info); if (insn == 0) return 0;
 func_0027ED70(&state, 0, sizeof(state)); state.s.retaddr_column = info.ra_regno; state.s.eh_ptr = info.eh_ptr;
 end = next_fde((fde *)get_cie(f)); while (insn < end) insn = func_0027CA18(insn, &state, &info, 0);
 insn = ((fde *)f) + 1;
 if (info.augmentation[0] == 'z') { int i; insn = func_0027C218(insn, &i); insn = (char *)insn + i; }
 end = next_fde(f); pc = f->pc_begin; while (insn < end && pc <= pc_target) insn = func_0027CA18(insn, &state, &info, &pc);
 *state_in = state.s; return state_in; }

