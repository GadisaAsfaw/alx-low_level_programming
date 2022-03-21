#include "main.h"
/**
 *puts2 - prints every other char
 *@str: string pointer
 */

void puts2(char *str)
{
	int i = 0;

	int cnt = 1;

	while (cnt)
	{
		_putchar(*(str + i));
		if (*(str) == '\0' || *(str + i + 1) == '\0' || *(str + i + 2) == '\0')
		{
			cnt = 0;
		}
		i += 2;
	}
	_putchar('\n');

}
