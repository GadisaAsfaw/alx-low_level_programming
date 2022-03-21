#include "main.h"
/**
 *swap_int - swap values of two integers
 *@a: pointer to 1st int
 *@b: pointer to 2nd int
 *
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
