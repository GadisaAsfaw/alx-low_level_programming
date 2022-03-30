#include "main.h"
/**
 *_pow_recursion - returns value of x raised to the power of y
 *@x: base number
 *@y: power number
 *
 *Return: -1 if y less than zero x to the power of y otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
