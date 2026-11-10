void func_00287648(unsigned lo, unsigned hi) { int i; unsigned v;
 for (i = 0; i < 0x1000; i += 0x40) {
  __asm__ volatile("sync\n\tcache 0x10, 0(%0)\n\tsync" :: "r"(i)); __asm__ volatile("mfc0 %0, $28" : "=r"(v)); v = (v & 0xFFFFF000) + i;
  if (!(v < lo) && !(hi < v)) __asm__ volatile("sync\n\tcache 0x14, 0(%0)\n\tsync" :: "r"(i));
  __asm__ volatile("sync\n\tcache 0x10, 1(%0)\n\tsync" :: "r"(i)); __asm__ volatile("mfc0 %0, $28" : "=r"(v)); v = (v & 0xFFFFF000) + i;
  if (!(v < lo) && !(hi < v)) __asm__ volatile("sync\n\tcache 0x14, 1(%0)\n\tsync" :: "r"(i));
  __asm__ volatile("sync"); } }

