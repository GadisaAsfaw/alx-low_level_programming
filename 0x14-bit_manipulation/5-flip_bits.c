#include "main.h"
/**
 *flip_bits - calculates numer of bits required to fliped to get from
 *             one number to another
 *@n: the number that changes
 *@m: the number to which n changes
 *Return: number of we need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count;
	unsigned long int min, max;

	if (n  >= m)
	{
		max = n;
		min = m;
	}
	else
	{
		max = m;
		min = n;
	}
	count = 0;
	while (max)
	{
		if (min)
		{
			if ((max & 1) != (min & 1))
				count++;
			min = min >> 1;
		}
		else
		{
			if (max & 1)
				count++;
		}
		max = max >> 1;
	}
	return (count);
}
