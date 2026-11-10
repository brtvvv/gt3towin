struct cie_info { char *augmentation; void *eh_ptr; int code_align; int data_align; unsigned ra_regno; };
struct frame_state { void *cfa; void *eh_ptr; long cfa_offset; long args_size; long reg_or_offset[80]; unsigned short cfa_reg; unsigned short retaddr_column; char saved[80]; };
struct frame_state_internal { struct frame_state s; struct frame_state_internal *saved_state; };
typedef struct { void *p __attribute__((packed)); } up; typedef struct { unsigned char b; } u1; typedef struct { unsigned short s __attribute__((packed)); } u2; typedef struct { unsigned int w __attribute__((packed)); } u4;
void *func_0027C218(void *, void *); void *func_0026D5E0(unsigned); void func_0026D5B8(void *); void func_0027E9D8(void) __attribute__((noreturn));
void *func_0027CA18(void *p, struct frame_state_internal *state, struct cie_info *info, void **pc) {
 unsigned insn = *(unsigned char *)p; unsigned reg; int offset; p = (char *)p + 1;
 if (insn & 0x40) *pc = (char *)*pc + ((insn & 0x3f) * info->code_align);
 else if (insn & 0x80) { reg = (insn & 0x3f); p = func_0027C218(p, &offset); offset *= info->data_align; state->s.saved[reg] = 1; state->s.reg_or_offset[reg] = offset; }
 else if (insn & 0xc0) { reg = (insn & 0x3f); state->s.saved[reg] = 0; }
 else switch (insn) {
 case 1: *pc = ((up *)p)->p; p = (char *)p + sizeof(void *); break;
 case 2: *pc = (char *)*pc + ((u1 *)p)->b; p = (char *)p + 1; break;
 case 3: *pc = (char *)*pc + ((u2 *)p)->s; p = (char *)p + 2; break;
 case 4: *pc = (char *)*pc + ((u4 *)p)->w; p = (char *)p + 4; break;
 case 5: p = func_0027C218(p, &reg); p = func_0027C218(p, &offset); offset *= info->data_align; state->s.saved[reg] = 1; state->s.reg_or_offset[reg] = offset; break;
 case 6: p = func_0027C218(p, &reg); state->s.saved[reg] = 0; break;
 case 7: case 8: case 0: break;
 case 9: { unsigned reg2; p = func_0027C218(p, &reg); p = func_0027C218(p, &reg2); state->s.saved[reg] = 2; state->s.reg_or_offset[reg] = reg2; } break;
 case 0xc: p = func_0027C218(p, &reg); p = func_0027C218(p, &offset); state->s.cfa_reg = reg; state->s.cfa_offset = offset; break;
 case 0xd: p = func_0027C218(p, &reg); state->s.cfa_reg = reg; break;
 case 0xe: p = func_0027C218(p, &offset); state->s.cfa_offset = offset; break;
 case 0xa: { struct frame_state_internal *save = (struct frame_state_internal *)func_0026D5E0(sizeof(struct frame_state_internal)); *save = *state; state->saved_state = save; } break;
 case 0xb: { struct frame_state_internal *save = state->saved_state; *state = *save; func_0026D5B8(save); } break;
 case 0x2d: for (reg = 16; reg < 32; ++reg) { state->s.saved[reg] = 1; state->s.reg_or_offset[reg] = (reg - 16) * sizeof(void *); } break;
 case 0x2e: p = func_0027C218(p, &offset); state->s.args_size = offset; break;
 default: func_0027E9D8(); }
 return p; }

