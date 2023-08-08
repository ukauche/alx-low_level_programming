#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read and printed
 * Return: w- actual number of bytes read and printed
 *        0 if function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t x;
	ssize_t z;
	ssize_t y;
	char *pf;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	pf = malloc(sizeof(char) * letters);
	z = read(x, pf, letters);
	y = write(STDOUT_FILENO, pf, z);

	free(pf);
	close(x);
	return (y);
}
