#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using mallco
 *@b: size of memory
 *
 *Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
