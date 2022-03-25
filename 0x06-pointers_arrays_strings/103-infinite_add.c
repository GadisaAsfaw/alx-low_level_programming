#include "main.h"
/**
 *infinite_add - adds two numbers
 *@n1: 1st number
 *@n2: 2nd number
 *@r: buffer to stor sum
 *@size_r: size of buffer
 *
 *Return: pointer to the sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ln1 = _strlen(n1);
	int ln2 = _strlen(n2);
	int mx = (ln1 >= ln2) ? ln1 : ln2;
	int mn = (ln1 <= ln2) ? ln1 : ln2;
	int c = 0;
	int sum_len = mx;

	if (ln1 >= size_r || ln2 >= size_r)
	{
		return (0);
	}
	else
	{
		int i;

		for (i = 0; i < mx; i++)
		{
			if (i < mn)
			{
				*(r + i) = ((((*(n1 + ln1 - 1 - i) + *(n2 + ln2 - 1 - i)) - 96) + c) % 10) + '0';
				c =  ((*(n1 + ln1 - 1 - i) + *(n2 + ln2 - 1 - i) - 96) + c) / 10;
			}
			else if (i >= mn && ln2 > ln1)
			{
				*(r + i) = (((*(n2 + ln2 - 1 - i) - 48) + c) % 10) + '0';
				c = ((*(n2 + ln2 - 1 - i) - 48) + c) / 10;
			}
			else if (i >= mn && ln1 > ln2)
			{
				*(r + i) = (((*(n1 + ln1 - 1 - i) - 48) + c) % 10) + '0';
				c = ((*(n1 + ln1 - 1 - i) - 48) + c) / 10;
			}


		}
		/*
		 *if there is carry
		 */
		if (c > 0)
		{
			if (i >= size_r - 1)
				return (0);
			*(r + i) = c + '0';
			*(r + i + 1) = '\0';
			sum_len += 1;
		}
		else
			*(r + i) = '\0';
	}
	rev_string(r, sum_len);
	return (r);
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


/**
 *rev_string - reverse string
 *@s: string pointer
 *@lg: length of the string
 */
void rev_string(char *s, int lg)
{
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
