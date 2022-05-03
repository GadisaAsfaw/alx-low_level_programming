#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 *append_text_to_file - appends text at the end of a file
 *@filename: name of the file
 *@text_content: NULL terminated string;
 *Return: 1 on success -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, sz_w, s_len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[s_len])
			s_len++;
		sz_w = write(fd, text_content, s_len);
		if (sz_w == -1)
			return (-1);
	}
	close(fd);
	return (1);

}
