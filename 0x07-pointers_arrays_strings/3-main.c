#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;
    int i;
    n = _strspn(s, f);
    printf("%u\n", n);

    for (i=0;s[i]!='\0';i++)
	    printf("%c\n",s[i]);
    return (0);
}
