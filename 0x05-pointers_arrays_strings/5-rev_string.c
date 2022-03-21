#include "main.h"
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


/**
 *rev_string - reverse string
 *@s: string pointer
 */
void rev_string(char *s)
{
	int lg = _strlen(s);

	int i = 0;

	char a;

	while (i < lg / 2)
	{
		a = *(s + i);
		*(s + i) = *(s + lg - 1 - i);
		*(s + lg - 1 - i) = a;
		i++;
	}
}
