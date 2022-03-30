#include "main.h"
/**
 *factorial - returns factorial of a given number
 *@n: given number
 *
 *Return: -1 if n is less than zero fuctorial of n otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
