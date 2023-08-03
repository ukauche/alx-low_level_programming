#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: Pointer to the number whose bit needs to be set
 * @index: The index of the bit to set (starting from 0)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	unsigned long int value = 1UL << index;


	*n = ((value) | *n);

		return (1);
}