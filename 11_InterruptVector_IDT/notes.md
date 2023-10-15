How does the hardware finds the interrupt handler?
====================================================

Interrupt Vector
------------------

On x86 Each interrupt or exception is identified by a number between 0 and 255. Intel calls this number a vector.

The interrupt vector is used by the interrupt-handling mechanism to locate the system-software service routine assigned to the exception or interrupt. 

Up to 256 unique interrupt vectors are available in x86

The number of interrupt vectors or entry points supported by a CPU differs based on the CPU architecture.

The first 32 vectors are reserved for predefined exception and interrupt conditions. 

Look into arch/x86/include/asm/traps.h 

Interrupt Descriptor Table
---------------------------

The IDT is a linear table of 256 entries which associates an interrupt handler with each interrupt vector.

When an interrupt is fired, the CPU looks at the IDT table, and finds what method needs to be called. 

Each descriptor is of size 8 bytes (on x86) and 16 bytes (on x86_64)

During early boot, the architecture-specific branch of the kernel code sets up the IDT in memory and programs the IDTR register (special x86 register)of the processor with the physical start address and length of the IDT. 


