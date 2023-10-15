How debuggers work?
===================

To implement breakpoints on the x86 architecture, software interrupts (also known as "traps") are used.

Breakpoints are implemented on the CPU by a special trap called int 3.

int is x86 jargon for "trap instruction" - a call to a predefined interrupt handler.

x86 supports the int instruction with a 8-bit operand specifying the number of the interrupt that occurred, 

Run the program in gdb, compile with debugging information
