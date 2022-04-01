#include <stdio.h>
/**
 *main - prints number of args passed into it
 *@argc:number of argument
 *@argv: array of strings
 *
 *Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
