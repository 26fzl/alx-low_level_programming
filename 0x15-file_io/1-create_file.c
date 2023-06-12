#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: pointer to the name.
 * @text_content: A pointer to a string.
 *
 * Return: if success 1, otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nlett, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (nlett = 0; text_content[nlett]; nlett++)
		;
	wr = write(fd, text_content, nlett);

	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}

