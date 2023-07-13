#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int str_len1 = 0, str_len2 = 0, total_len, i;
char *ptr;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[str_len1] != '\0')
str_len1++;

while (s2[str_len2] != '\0')
str_len2++;

if (n >= str_len2)
n = str_len2;

total_len = str_len1 + n;

ptr = malloc((sizeof(char) * total_len) +1);

if (ptr == NULL)
exit(1);

for (i = 0; i < str_len1; i++)
ptr[i] = s1[i];

for (i = 0; i < n; i++)
ptr[str_len1 + i] = s2[i];

ptr[total_len] = '\0';
return (ptr);
}
