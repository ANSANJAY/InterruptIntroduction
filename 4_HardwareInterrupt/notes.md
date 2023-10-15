The 8086 processor has two hardware interrupt signals

– NMI non-maskable interrupt
– INTR Interrupt request (maskable interrupt)

How to support more than two interrupts?
==========================================

It would be very unproductive to make a ton of INTR pins on the CPU for all of them.

To solve this problem a special chip was invented — an interrupt controller.
