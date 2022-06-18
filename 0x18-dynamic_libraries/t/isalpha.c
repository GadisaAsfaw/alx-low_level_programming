 #include "main.h"
/**
 *_isalpha - checks for alphabetic
 *character
 *@c: char to be checked
 *
 *Return: 1 if c is ( lc,up)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	   (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
