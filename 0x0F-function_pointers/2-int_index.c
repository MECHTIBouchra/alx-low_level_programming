#include "function_pointers.h"
#include <stdlib.h>

/**
  * int_index - search an int
  * @array: int*
  * @size: int
  * @cmp: int*
  * Return: int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp != NULL && array != NULL)
	{
		while (size > i)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
