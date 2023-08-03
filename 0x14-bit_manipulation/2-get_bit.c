#include <stdio.h>
#include "main.h"

/**
 * get_bit - Get the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to be retrieved (starting from 0).
 *
 * Return: The value of the bit at the given index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int bits = 1UL << index;

	if ((n & bits) == 0)
		return (0);
	else
		return (1);
}
