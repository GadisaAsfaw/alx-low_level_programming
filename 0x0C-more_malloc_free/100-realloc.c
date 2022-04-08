#include "main.h"
#include <stdlib.h>
/**
 *_realloc - reallocates a memory block using malloc and free;
 *@ptr: pointer to the previously allocated memory
 *@old_size:  size of allocated space for ptr
 *@new_size: size of new memory block
 *
 *Return: new memory block of size new_size , NULL if if new_size
 * is zero and ptr is not NULL, ptr if new_size == old_size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr = NULL;
	int cp_size, i = 0;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
	}
	else
	{
		if (new_size == 0)
			free(ptr);
		else if (new_size == old_size)
		{
			return (ptr);
		}
		else
		{
			nptr = malloc(new_size);
			if (nptr == NULL)
				return (nptr);
			cp_size = (new_size > old_size) ? old_size : new_size;
			while (i < cp_size)
			{
				nptr[i] = ((char *)ptr)[i];
				i++;
			}
			free(ptr);
		}
	}
	return (nptr);
}
