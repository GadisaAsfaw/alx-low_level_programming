#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
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
	unsigned int l1, l2, l3, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l3 = (l2 <= n) ? (l1 + l2 + 1) : (l1 + n + 1);
	nstr = malloc(sizeof(char) * (l3));
	if (nstr == NULL)
		return (NULL);
	while (i < (l3 - 1))
	{
		if (i < l1)
			nstr[i] = s1[i];
		else
		{
			nstr[i] = s2[i - l1];
		}
		i++;
	}
	nstr[i] = '\0';

	return (nstr);
}


/**
 *_strlen - count length of string
 *@s: string
 *
 *Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
