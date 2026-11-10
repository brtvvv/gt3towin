extern "C" {
typedef struct frame_state { void *cfa; void *eh_ptr; long cfa_offset; long args_size; long reg_or_offset[80]; unsigned short cfa_reg; unsigned short retaddr_column; char saved[80]; } frame_state;
typedef long word_type;
void func_0027E9D8(void) __attribute__((noreturn));
static inline int in_reg_window(int reg, frame_state *udata) { return 0; }
word_type *func_00278FD0(unsigned reg, frame_state *udata, frame_state *sub_udata) { while (udata->saved[reg] == 2) { reg = udata->reg_or_offset[reg]; if (in_reg_window(reg, udata)) { udata = sub_udata; sub_udata = 0; } } if (udata->saved[reg] == 1) return (word_type *)((char *)udata->cfa + udata->reg_or_offset[reg]); else func_0027E9D8(); }
}

