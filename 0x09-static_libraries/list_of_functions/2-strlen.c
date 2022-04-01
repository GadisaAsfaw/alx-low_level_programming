/**
 *_strlen - count length of string
 *@s: char pointer
 *
 *Return: length of string
 */
#include "main.h"
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
