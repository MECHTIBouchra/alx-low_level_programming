#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * array_range - Array of ints
  * @min: int
  * @max: int
  * Return: int*
  */
int *array_range(int min, int max)
{
int d = 0, i, *p;
if (min > max)
{
return (NULL);
}
d = (max + 1 - min);
p = malloc(sizeof(int) * d);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < d; i++)
{
p[i] = min + i;
}
return (p);
}
