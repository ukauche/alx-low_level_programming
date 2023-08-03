#include "main.h"

/**
 * binary_to_uint - Convert binary number to unsigned int.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: The converted unsigned int or 0 if invalid input.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	return (0);

	for (; *b; b++)
	{
	if (*b == '0')
	{
		result <<= 1;
	}
	else if (*b == '1')
	{
		result <<= 1;
		result |= 1;
	}
	else
	{
		return (0);
	}
	}

		return (result);
}
