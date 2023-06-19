#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 if Successful
  */
int main(void)
{
int lower = 'a';
int upper = 'A';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
while (upper <= 'Z')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
