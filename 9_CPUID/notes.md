CPUID
=========

cpuid is an x86 opcode which stands for CPU IDentification. 

The CPUID instruction can be used to retrieve various amount of information about your cpu
	Vendor String
	Model Number
	size of internal caches
	List of CPU Features

$ man 4 cpuid

The  cpuid driver is not auto-loaded.  On modular kernels you might need to use the following command to load it explicitly before use:

$ modprobe cpuid

Most of the information in cpuid is reported by the kernel in cooked form either in /proc/cpuinfo

$ cat /proc/cpuinfo | grep -i apicid

apicid: A unique ID given to each logical processor upon startup

