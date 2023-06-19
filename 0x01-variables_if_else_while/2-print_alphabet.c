#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 if successful
  */

int main(void)
{
int lower = 'a';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
putchar('\n');
return (0);
}
