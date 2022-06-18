#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *
 *Return: pointer to dest string
 */
char *_strcat(char *dest, char *src)
{

	int i, dl;

	dl = _strlen(dest);

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + dl + i) = *(src + i);
	}
	*(dest + dl + i) = '\0';
	return (dest);
}




