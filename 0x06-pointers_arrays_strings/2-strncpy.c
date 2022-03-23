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
	int i, dl;
	int end = 0;

	dl = _strlen(dest);

	for (i = 0; i < n; i++)
	{
		if (*(src + i) == '\0')
			end = 1;
		if (!end)
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
	}
	*(dest + dl + i) = '\0';
	return (dest);

}

/**
 *_strlen - count length of string
 *@s: char pointer
 *
 *Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
