#include "main.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointer to a string of 0 and 1 chars
 *Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, sum = 0;

	if (!b)
		return (0);
	while (b[len] != '\0')
		len++;
	while (i < len)
	{
		if ((b[i] == '1') || (b[i] == '0'))
		sum += (b[i] - 48) * _pow(2, len - i - 1);
		else
			return (0);
		i++;
	}
	return (sum);
}
/**
 *_pow - computes the value of base b raised to the power y
 *@b: base number
 *@p: power number
 *Return: value of b^p
 */
int _pow(int b, int p)
{
	int tot = 1, i = 0;

	while (i < p)
	{
		tot *= b;
		i++;
	}
	return (tot);
}
