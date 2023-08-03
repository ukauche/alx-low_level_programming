#include "main.h"

/**
 * flip_bits - A function that counts the number of bits to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int value = n ^ m;

	for (int i = 0; i < 64; i++)
	{
	if ((value & (1UL << i)) != 0)
		counter++;
	}

		return (counter);
}
