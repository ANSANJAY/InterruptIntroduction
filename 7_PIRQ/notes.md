Programmable Interrupt Request (PIRQ)
======================================

Initially, the x86 used ISA Bus.

The PCI bus later replaced the ISA bus.

Unfortunately, the number of devices began to exceed the number 15.

Also instead of the static ISA bus, devices in the PCI bus can be added to the system dynamically 

Interrupts in the PCI bus can be shared, so it is possible to connect many devices to one interrupt line IRQ.

In the end, to solve the problem of lack of interrupt lines, it was decided to group interrupts from all of the PCI devices to PIRQ lines (Programmable Interrupt Request).

For example, suppose we have 4 free interrupt lines on the PIC controller and 20 PCI devices.

We can combine interrupts from 5 devices into one PIRQx line, and connect these PIRQx lines to the PIC controller.

 In this case if there is an interrupt on one of PIRQx lines, the processor will have to ask all the devices connected to this line about the interrupt to know who is responsible for it, but in the end it solves the problem.

The device that connects PCI interrupt lines to PIRQ lines is often called a PIR router.

This method ensures that PIRQx lines don't connect to lines with ISA interrupts (since this will produce conflicts) 

System software, such as the BIOS or operating system, is responsible for programming the interrupt router. 
