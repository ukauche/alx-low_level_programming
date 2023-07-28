#include "lists.h"

void come_first(void) __attribute__ ((constructor));

/**
 * come_first - function that prints a sentence before main function
 */
void come_first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
