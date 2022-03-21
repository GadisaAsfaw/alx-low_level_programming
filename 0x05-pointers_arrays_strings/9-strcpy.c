/**
 *_strcpy - copies string
 *@dest: destination
 *@src: source
 *
 *Return: char pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\n')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
