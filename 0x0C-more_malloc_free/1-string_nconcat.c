#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates n number of chars form s2 to s1
 *@s1: - the first string
 *@s2: - second string
 *@n: - number of char/bytes to be conatenated from s2 to s1
 *
 *Return: pointer to string or NULL if program fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *nstr;
	unsigned int i = 0,j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	nstr = malloc(sizeof(s1) + n);
	if (nstr == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		nstr[i] = *s1;
		s1++;
		i++;
	}
	while (j < (sizeof(s2) - 1) && j < n)
	{
		nstr[i] = s2[j];
		j++;
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
