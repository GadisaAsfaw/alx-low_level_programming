#include <stdio.h>
/**
 *main - prints its name
 *@argc:number of argument
 *@argv: array of strings
 *
 *Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
