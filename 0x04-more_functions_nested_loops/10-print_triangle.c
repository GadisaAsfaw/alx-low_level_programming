#include "main.h"
/**
 *print_triangle - draws triangle using #
 *@size: size of triangle
 */
void print_triangle(int size)
{
	int i;
	if (size < 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		int j;

		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
