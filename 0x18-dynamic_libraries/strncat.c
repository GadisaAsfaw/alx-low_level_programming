#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: destination
 *@src: source
 *@n: maximum number of bytes for src
 *
 *Return: pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, dl;

	dl = _strlen(dest);

	for (i = 0; *(src + i) != '\0' && i < n; i++)
	{
		*(dest + dl + i) = *(src + i);
	}
	*(dest + dl + i) = '\0';
	return (dest);

}




