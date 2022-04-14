#include<stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - calculates sum of all its parameters
 *@n: number of arguments
 *Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int i, sum;

	va_start(lst, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(lst, int);
	va_end(lst);
	return (sum);
}
