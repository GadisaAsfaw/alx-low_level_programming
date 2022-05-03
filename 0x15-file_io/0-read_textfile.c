#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the standard ouput
 *@filename: file name
 *@letters:  number of letters it should read and write
 *Return: number of letters it could read and print or 0 if filename is NULL
 *        or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz_r, sz_w;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	sz_r = read(fd, buf, letters);
	if (sz_r == -1)
	{
		free(buf);
		return (0);
	}
	sz_w = write(STDOUT_FILENO, buf, sz_r);
	if (sz_w == -1 || sz_r != sz_w)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (sz_r);
}
