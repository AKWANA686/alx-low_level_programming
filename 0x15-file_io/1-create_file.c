#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content writed in the file
 *
 * Return: 1 if it success. -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd, q, r = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[r])
			r++;
		q = write(fd, text_content, r);
		if (q != r)
			return (-1);
	}

	close(fd);

	return (1);
}
