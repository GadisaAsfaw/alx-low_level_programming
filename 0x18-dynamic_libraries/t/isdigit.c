#include "main.h"
/**
 *_isdigit - checks for a digit
 *@c: input to be checked
 *
 *Return: 1 if true 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	return (0);

}
