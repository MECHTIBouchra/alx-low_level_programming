#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _realloc - reallocate using malloc and free
  * @ptr: void*
  * @old_size: unsigned int
  * @new_size: unsigned int
  * Return: void*
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i;
if (new_size == old_size)
{
return (ptr);
}
if ((new_size == 0) && (ptr != NULL))
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
{
return (NULL);
}
}
if (new_size > old_size && (ptr != NULL))
{
p = malloc(new_size);
if (p == NULL)
{
return (p);
}
for (i = 0; i < old_size; i++)
{
p[i] = *((char *)ptr + 1);
}
free(ptr);
}
return (p);
}
