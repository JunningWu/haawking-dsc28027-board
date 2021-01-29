#include "util.h"

#define _AC(X,Y)        (X##Y)

uint32_t read_reg32(uintptr_t addr);
void write_reg32(uintptr_t addr,uint32_t val);

