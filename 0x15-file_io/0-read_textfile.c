#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file and print it.
 * @filename: text of file
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lr, lw;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lr = read(fd, buffer, letters);
	close(fd);
	if (lr == -1)
	{
		free(buffer);
		return (0);
	}
	lw = write(STDOUT_FILENO, buffer, lr);
	free(buffer);
	if (lr != lw)
		return (0);
	return (lw);
}
