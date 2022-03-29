#include "main.h"
/**
 *_strstr - locates a substring
 *@haystack: string to be searched in
 *@needle: substring to be searched for
 *
 *Return: pointer to the beginning of the located substirng
 *or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j])
			{
				i++;
				j++;
			}
			if (haystack[i] == needle[0])
			{
				j = 0;
				i -= 1;
			}
			else if (needle[j] != '\0')
				j = 0;
			else
				return (&haystack[i - j]);
		}
		i++;
	}
	return (NULL);
}
