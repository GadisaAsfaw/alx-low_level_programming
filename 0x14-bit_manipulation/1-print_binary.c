#include "main.h"
#include <stdio.h>
/**
 *print_binary - prints the binary representation of a number
 *@n:number in base 10
 */
void print_binary(unsigned long int n)
{
	int i, start = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}

	for (i = (sizeof(n) * 8 - 1); i >= 0; i--)
	{
		/* this only executes ones */
		if (((n >> i) & 1) && !start)
			start = 1;
		if (start)
			_putchar(((n >> i) & 1) + '0');
	}
}
