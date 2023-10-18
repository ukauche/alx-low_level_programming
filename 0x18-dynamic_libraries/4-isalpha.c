#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: the charc to be checked
 * Return: Always 0
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
