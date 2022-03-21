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
 *puts_half - print the 2nd half of string
 *@str: pointer to string
 *
 */
void puts_half(char *str)
{
	int i;
	int lg = _strlen(str);
	int hlg = (lg  % 2 == 0) ? lg / 2 : (lg - 1) / 2;

	for (i = hlg; i < lg; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\0');

}
