#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_file - creates a file
 *@filename: Name of a file to be created
 *@text_content:  NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, sz_w, str_len = 0;
	mode_t mode;

	if (!filename)
		return (-1);

	/*The wr------- permission for the new file.*/
	mode = S_IRUSR | S_IWUSR;
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[str_len])
			str_len++;
		/*sz_w = write(fd,text_content,strlen(text_content));*/
		sz_w = write(fd, text_content, str_len);
		if (sz_w == -1 || sz_w != str_len)
			return (-1);
	}

	close(fd);

	return (1);
}
