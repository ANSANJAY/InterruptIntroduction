Exceptions
============

Exceptions are classified as faults, traps and abort, depending on the way they are reported and whether the instruction that caused the exception can be restarted without loss of program

traps increment the instruction pointer, faults do not, and aborts 'explode'

Faults: These can be corrected and the program may continue as if nothing happened. Eg. page fault
Traps: Traps are reported immediately after the execution of the trapping instruction. Eg. int instruction
Aborts: Some severe unrecoverable error. Eg. hardware failure
