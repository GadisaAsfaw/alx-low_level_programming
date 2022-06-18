#include "main.h"
/**
 *_isupper - checks for uppercase
 *@c: input to be checked
 *
 *Return: 1 if c i uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
	return (0);
}
