#include "main.h"
#include <stdlib.h>
int isNumber(char *n);
int changetoNumber(char *n);
int reverseNumber(int n);
/**
 *main - multiplies two numbers
 *@argc: number of input arguments
 *@argv: array of input numbers
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int r = 0;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	else if (!isNumber(argv[1]) || !isNumber(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);

	}
	else
	{
		r = changetoNumber(argv[1]) * changetoNumber(argv[2]);
		r = reverseNumber(r);
		if (r == 0)
		{
			_putchar(r + '0');
			_putchar(r + '\n');
		}
		else
		{
			while (r != 0)
			{
				_putchar((r % 10) + '0');
				r = r / 10;
			}
			_putchar('\n');
		}
	}
	return (0);
}

/**
 *isNumber - check if char is number
 *@n: string
 *Return: 1 if true 0 otherwise
 */
int isNumber(char *n)
{
	while (*n != '\0')
	{
		if (*n < '0' || *n > '9')
			return (0);
		n++;
	}
	return (1);
}
/**
 *changetoNumber - changes string into equivalent number
 *@n: input string
 *Return: equivalent number
 */
int changetoNumber(char *n)
{
	int i = 0;

	while (*n != '\0')
	{
		i = (i * 10) + (*n - 48);
		n++;

	}
	return (i);
}

/**
 *reverseNumber - reverses a number
 *@n: given number
 *Return: the reversed value
 */
int reverseNumber(int n)
{
	int i = 0;

	while (n != 0)
	{
		i = (i * 10) + n % 10;
		n = n / 10;
	}
	return (i);
}
