#include "main.h"
/**
 *_isalpha - checks for alphabetic
 *character
 *@c: char to be checked
 *
 *Return: 1 if c is (letter, lc,up)
 */
int _isalpha(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') ||
	   (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
