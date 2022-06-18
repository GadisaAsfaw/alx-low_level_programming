#include "main.h"
/**
 *_strncpy - copy string
 *@dest: destination
 *@src: source
 *@n:maximum number of bytes(chars)
 *
 *Return: pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int end = 0;

	for (i = 0; i < n; i++)
	{
		if (*(src + i) == '\0')
			end = 1;
		if (!end)
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
	}
	return (dest);

}


