#include "main.h"
/**
 *clear_bit -  sets the value of a bit to 0 at a given index
 *@n: address of number
 *@index: index of binary representation starting from 0
 *Return: 1 or -1 if there is error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int new_n;
	unsigned int len, i;

	len = sizeof(*n) * 8;
	if (index >= len)
		return (-1);
	if (!(((*n) >> index) & 1))
		return (1);
	i = 0;
	new_n = 0;
	while (i < len)
	{
		if (i == index)
			new_n += 0;
		else
			new_n += (((*n) >> i) & 1) * _pow(2, i);
		i++;
	}
	*n = new_n;
	return (1);
}


/**
 *_pow - computes the value of base b raised to the power y
 *@b: base number
 *@p: power number
 *Return: value of b^p
 */
int _pow(int b, int p)
{
	int tot = 1, i = 0;

	while (i < p)
	{
		tot *= b;
		i++;
	}
	return (tot);
}
