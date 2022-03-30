#include "main.h"


int checker(int n, int i);

/**
 *is_prime_number - check if number is prime or not
 *@n: given number
 *
 *Return: 1 if n is prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checker(n, n - 1));

}

/**
 *checker- check if number(greater than 1) is prime or not
 *@n: given number
 *@i: counter/iterator
 *
 *Return: 1 if n is prime 0 otherwise
 */
int checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (!(n % i))
		return (0);
	return (checker(n, i - 1));
}
