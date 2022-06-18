#include "main.h"
/**
 *_memset - Fills memory with a constant byte
 *@s: pointer to memory area
 *@b: constant byte
 *@n: number of bytes
 *
 *Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; n--)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
