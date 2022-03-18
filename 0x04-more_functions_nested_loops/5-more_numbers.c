#include "main.h"
/**
 *more_numbers - print numbers 0-14
 */
void more_numbers(void)
{
	int j;

	int i;

	for (j = 1; j <= 10; j++)
	{
	for (i = 0; i < 15; i++)
	{
		if (i > 9)
		{
			_putchar('1');
		}
		_putchar(i % 10 + '0');
	}

	_putchar('\n');
	}
}
