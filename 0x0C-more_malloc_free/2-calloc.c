#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array
 *@nmemb: number of elements the array will have
 *@size: size of each element
 *
 *Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newmem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	newmem = malloc(size * nmemb);
	if (newmem == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		newmem[i] = 0;
	}
	return (newmem);
}
