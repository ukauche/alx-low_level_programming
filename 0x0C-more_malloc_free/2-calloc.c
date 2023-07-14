#include <stdlib.h>
#include "main.h"

/**
  * _calloc - allocates memory for an array
  * @nmemb: number of elements in the array
  * @size: size of each element
  *
  * Return: pointer to allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int total, i;
void *ptr;
char *ptr1;

if (nmemb == 0 || size == 0)
return (NULL);

total = nmemb * size;

ptr = malloc(total);

if (ptr == NULL)
return (NULL);

ptr1 = (char *)ptr;
for (i = 0; i < total; i++)
ptr1[i] = 0;

return (ptr);

}
