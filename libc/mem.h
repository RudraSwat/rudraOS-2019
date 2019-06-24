#ifndef MEM_H
#define MEM_H

#include "types.h"

void memory_copy(uint8 *source, u8 *dest, int nbytes);
void memory_set(uint8 *dest, u8 val, u32 len);
uint32 kmalloc(u32 size, int align, u32 *phys_addr);

#endif
