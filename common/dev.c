#include "util.h"



uint32_t read_reg32(uintptr_t addr){
  volatile uint32_t * reg       = (uint32_t*) addr;
  return *reg;
}


void write_reg32(uintptr_t addr,uint32_t val){
  volatile uint32_t * reg       = (uint32_t*) addr;
  *reg = val;
}
