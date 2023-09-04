#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: Null terminated string to add to the end of the file.
 *
 * Return: 1 on success and if file exists
 *	  -1 if the function fails or filename is NULL.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, i);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
