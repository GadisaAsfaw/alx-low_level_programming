#include "main.h"
#include <stdlib.h>
int _strlen(char *s);

/**
 *argstostr - concatenates all arguments of the program
 *@ac: number of arguments passed plus 1 (which is program name)
 *@av:pointer to pointer (array of pointers to string) (2D-array)
 *
 *Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int *arr_of_strlen;   /* array containing length of each arg/string */
	char *newstr;         /* pointer to new string*/
	int i, k, j = 0, newstrlen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	arr_of_strlen = (int *)malloc(sizeof(int) * ac);
	if (arr_of_strlen == NULL)
		return (NULL);
	/* calculate length of each arg and add to array */
	/*  calculate length of new array*/
	for (i = 0; i < ac; i++)
	{
		arr_of_strlen[i] = _strlen(av[i]);
		newstrlen += arr_of_strlen[i];
	}
	/*for the new line(\n) char and null terminator(\0)*/
	newstrlen += (ac + 1);

	/* allocate space for new string */
	newstr = (char *)malloc(sizeof(char) * newstrlen);
	if (newstr == NULL)
		return (NULL);

	/* append char of each argument/string to*/
	/* to space of new string */
	for (k = 1; k < ac; k++)
	{
		while (*(av[k]) != 0)
		{
			newstr[j] = *(av[k]);
			(av[k])++;
			j++;
		}
		/*add new line char to the of each argument/string*/
		newstr[j] = '\n';
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
