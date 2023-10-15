APIC (Advanced PIC)
============

The PIC method only works for a single processor systems.

PIC can only send interrupts to one CPU, and in a multiprocessor system it is desired to load CPUs in a balanced way. 

The solution to this problem was the new APIC interface (Advanced PIC).

Comprises of two components:
1. IO-APIC - Interfaces with Devices
2. LAPIC   - Interfaces with CPU

LAPIC:
---------
	Each processor in a multiprocessor system consists of a one LAPIC.
	Responsible for
		receiving various interrupt requests and delivering them to the processor
		handling prioritization of interrupts
		sending interrupts to other processors (known as inter processor interrupts or IPIs)

	 LAPIC can be connected directly to I/O devices via local interrupt inputs (timer, thermal sensor) or through IOAPIC via external interrupt inputs

	LAPIC can generate interrupts due to interrupt requests received from various sources
		IPIs received from other processors
		interrupts coming from LINT or EXTINT
		

I/O APIC
---------
	connects to the devices to allow device interrupt requests to be routed to LAPIC(s).
	There can be one or more IOAPIC in the system
	Each IOAPIC has 24 interrupt lines
	IOAPIC receives interrupt requests from the devices and sends them to LAPIC(s) based upon the redirection table entries (RTE) programmed in the IOAPIC.


Note: To maintain backward compatibility, APIC emulates 8259 PIC. 


Detection
==============

The CPUID.01h:EDX[bit 9] flag specifies whether a CPU has a built-in local APIC.


