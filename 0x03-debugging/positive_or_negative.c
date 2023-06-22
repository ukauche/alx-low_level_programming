#include "main.h"
#include <stdio.h>
/**
  * positive_or_negative - determine if number is positive, neg or 0
 (* 0 : nos to be checked
  * @i: integer
  * Return: 0
  */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
