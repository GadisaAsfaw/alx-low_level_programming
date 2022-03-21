#include "main.h"
#include <stdio.h>
/**
 *_atoi - covert a string to an integer
 *@s: string pointer
 *
 *Return: 0 if there is no number otherwise 1
 */
int _atoi(char *s)
{
	int j = 0;
	char sn = '+';
	int long num = 0;

	while (*(s + j) != '\0')
	{
		if (isSignN(*(s + j)))
			sn = (sn == '+') ? '-' : '+';
		if (isInt(*(s + j)))
		{
			while (isInt(*(s + j)) && *(s + j) != '\0')
			{
				num = num * 10 + (*(s + j) - 48);
				j++;
			}
			num = (sn == '-') ? (num * -1) : num;
			return (num);
		}
		j++;
	}
	return (0);
}
/**
 *isInt - check if char is Integer
 *@a: input char
 *
 *Return: 1 if int 0 otherwise
*/
int isInt(char a)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (a == i)
			return (1);
	}
	return (0);
}
/**
 *isSignN - check sign
 *@a: input char
 *
 *Return: 1 if sign (-) 0 othrewise
 */
int isSignN(char a)
{
	if (a == '-')
		return (1);
	return (0);
}
