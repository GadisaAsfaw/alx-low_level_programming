#include <stdio.h>
/**
* main - print 1-10, but print if number is multiple of
*3 print Fizz
*5 print Buzz
*both 3&5 print FizzBuzz
* Return: 0 Success
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	printf("\n");
	return (0);
}
