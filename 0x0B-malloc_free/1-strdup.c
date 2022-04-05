#include "main.h"
#include <stdlib.h>
/**
 *_strdup - Returns a pointer to a newly allocated space in memory which
 *          contains copy of given the given string
 *@str: given string
 *
 *Return: pointer o the duplicated string or NULL if str is NULL or if program
 *       fails/insufficient memory
 */
char *_strdup(char *str)
{
	char *newstr, *tmp = str;
	int len = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (*tmp != '\0')
	{
		len++;
		tmp++;
	}

	newstr = (char *)malloc(sizeof(char) * len);

	if (newstr == NULL)
		return (NULL);

	tmp = str;

	while (*tmp != '\0')
	{
		newstr[j] = *tmp;
		tmp++;
		j++;
	}

	return (newstr);
}
