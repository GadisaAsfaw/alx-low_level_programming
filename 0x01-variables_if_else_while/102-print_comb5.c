#include <stdio.h>
/**
 *main -  print all possible combinations of two digit numbers
 *Return: 0
 */
int main(void)
{
	int i;

	int j;

	int a;

	int b;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (a = i; a < 58; a++)
			{
				for (b = j + 1 ; b < 58; b++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(a);
					putchar(b);
					if (!(i == 57 && j == 56))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
