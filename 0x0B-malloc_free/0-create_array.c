#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars,
 *                and initializes it with a specific char
 *@size: size of array
 *@c:initial value of array
 *
 *Return: pointer to array or NULL if size is 0 or program fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
