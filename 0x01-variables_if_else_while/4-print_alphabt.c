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
if (lower == 'q' || lower == 'e')
{
lower++;
}
else
{
putchar(lower);
lower++;
}
}
putchar('\n');
return (0);
