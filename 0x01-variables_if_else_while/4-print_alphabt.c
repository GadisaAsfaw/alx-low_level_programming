#include <stdio.h>
/**
 *main - print alphabets except q and e
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
