#include <stdio.h>
#include <sys/io.h>

int main()
{
	outb(0x70, 0x00);
	return 0;
}
