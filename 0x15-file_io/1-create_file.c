#include "main.h"

/**
 * create_file - A function name that creates a file.
 * @filename: Pointer to the name of the file to be created.
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: 1 on success and If -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int x, y, i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, i);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
