Programmable Interrupt Controller (PIC)
===========================================

The 8259 Programmable Interrupt Controller (PIC) is one of the most important chips making up the x86 architecture

Allows for multiplexing the single INT line on the x86 processor to multiple interrupt lines
Interrupt lines can be assigned various hardware priority levels, as well as programmable interrupt masking.

Each PIC has 8 interrupt lines called Interrupt Request (IRQ), numbered from 0 to 7.
PIC has one output line which connects to the INTR line of the CPU

A device supporting interrupts has an output pin used for signalling an Interrupt ReQuest (IRQ)

When one of PIC IRQ lines goes high, the 8259  will make a signal over the INTR line.

CPU will know that some device requires its immediate attention, and the processor will ask the PIC which of the 8 input lines (IRQx) was the source of this interrupt.

Why call Interrupt Request (IRQ)
===============================

Peripheral devices cannot directly force interrupts, but has to request them via the PIC, we call them IRQ OR Interrupt Request.

Dual PIC
===========

Soon 8 lines weren't enough. 

To increase the total number of interrupt lines two 8259 controllers (master and slave) were connected in a cascade (Dual PIC).

IRQs from 0 to 7 are processed with the first Intel 8259 PIC (master)
IRQs from 8 to 15 are processed with the second Intel 8259 PIC (slave).

Only the master is connected to the CPU and can signal about the incoming interrupts
 If there is an interrupt on lines 8-15, the second PIC (slave) will signal about it to the master on the line IRQ2, and after that the master will signal the CPU. 

This cascaded interrupt takes away 1 of the 16 lines, but makes a total of 15 interrupts for all external devices.


Port Interface
==============

Two separate dedicated ports in the x86 IO-port space for each connected PIC

Master PIC - 0x20, 0x21
Slave  PIC - 0xA0, 0xA1

# cat /proc/ioports | grep -i pic


