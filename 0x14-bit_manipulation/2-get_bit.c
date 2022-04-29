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
	if (index >= (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
