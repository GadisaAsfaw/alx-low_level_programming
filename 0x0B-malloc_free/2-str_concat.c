#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: pointer to new allocated space in memory
 *        which contains contents of s1 followed by contents of s2
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, j = 0;
	char *newstr;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);

	newstr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (newstr == NULL)
		return (NULL);
	while (j < (len1 + len2))
	{
		if (j < len1)
			newstr[j] = s1[j];
		else
			newstr[j] = s2[j - len1];
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
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
