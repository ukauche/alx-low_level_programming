#include "main.h"

/**
 * print_lastdigit - Print last number
 * @n: The variable assinged
 * Return: Value of last number
 */
int print_lastdigit(int n)

{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}

_putchar(last + '0');
return (last);
