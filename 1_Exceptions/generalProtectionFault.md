General Protection Fault
========================
A General Protection Fault may occur for various reasons. The most common are:

Segment error (privilege, type, limit, read/write rights).
Executing a privileged instruction while CPL != 0.
Writing a 1 in a reserved register field.
Referencing or accessing a null-descriptor.
Trying to access an unimplemented register (like: mov cr6, eax)
The saved instruction pointer points to the instruction which caused the exception.
