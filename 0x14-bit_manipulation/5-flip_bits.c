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
	int counter, num = 0;

	unsigned long int val;

	unsigned long int value = n ^ m;

	for (num = 63; num >= 0; num++)
	{
		val = value >> num;
		if (val & 1)
		counter++;
	}
	return (counter);
}
