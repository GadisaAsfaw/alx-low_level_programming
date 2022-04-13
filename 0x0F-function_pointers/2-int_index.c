#include "function_pointers.h"
/**
 *int_index - searches for specific integer
 *@array: array of integers
 *@size: size of array
 *@cmp: function pointer with specific criterion
 *
 *Return: 1 if function found one, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
