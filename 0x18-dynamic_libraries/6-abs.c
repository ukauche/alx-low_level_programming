#include "main.h"

/**
 * _abs - computes absolute numbers
 * @c: the charc to be checked
 * Return: Absolute value of number 0
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}

