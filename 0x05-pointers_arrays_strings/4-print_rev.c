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
 *print_rev - print string in reverse order
 *@s: pointer to string
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
