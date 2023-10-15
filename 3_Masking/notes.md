Masking
================

Processors typically have an internal interrupt mask register.
This allows selective enabling and disabling of hardware interrupts.

Each interrupt signal is associated with a bit in the mask register.
Bit = 1 , Interrupt Enabled
Bit = 0 , Interrupt Disabled

When the interrupt is disabled, the associated interrupt signal will be ignored by the processor.

Maskable Interrupts: Interrupts which can be enabled/disabled
NonMaskable Interrupts: Interrupts which cannot be disabled.
			Example: NMI, timeout signal from watchdog timer
