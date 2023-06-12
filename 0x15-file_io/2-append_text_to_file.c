#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name.
 * @text_content: The string to add.
 *
 * Return: if the file exists 1, otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nlett, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nlett = 0; text_content[nlett]; nlett++)
			;
		wr = write(fd, text_content, nlett);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}




