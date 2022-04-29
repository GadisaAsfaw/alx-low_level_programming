#include "main.h"
#include <stdio.h>
/**
 *get_bit - find value of a bit at a given index
 *@n: given decimal number
 *@index: given index, starting from 0 of the bit
 *Return: value of the bit at the index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;
	unsigned int i;

	tmp = n;
	i = 0;
	if (!tmp)
		return (0);
	while (tmp && i <= index)
	{
		if (i == index)
			return ((n >> i) & 1);
		tmp = tmp >> 1;
		i++;
	}
	return (-1);
}
