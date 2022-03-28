#include "main.h"
#include <stdio.h>
/**
 *print_diagsum - prints the sum of the two diagonals
 *@a: pointer to array of array
 *@size: size of each array
 *
 */
void print_diagsums(int *a, int size)
{
        int i = 0, sum_1 = 0, sum_2 = 0;

	while(i < size * size)
	{
		sum_1 += a[i];
		i += (size+1);
	}
	i = size - 1;
	while(i <= size * (size - 1))
	{
		sum_2 += a[i];
		i += (size - 1);
	}
	printf("%d, %d\n",sum_1,sum_2);
}
