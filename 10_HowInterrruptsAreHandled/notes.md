What happens when there is an interrupt
=======================================

Device Asserts IRQ of I/O APIC

I/O APIC transfer interrupt to LAPIC

LAPIC asserts CPU interrupts

After current instruction completes CPU senses interrupt line and obtains IRQ number from LAPIC

Jumps to interrupt handler
