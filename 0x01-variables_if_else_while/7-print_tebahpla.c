#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 successful
  */
int main(void)
{
char le;

for (le = 'z'; le >= 'a'; le--)
putchar(le);
putchar('\n');
return (0);
}
