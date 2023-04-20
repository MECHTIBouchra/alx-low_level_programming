#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_iterator - call a function given by param
  * @array: int*
  * @size: size
  * @action: void*
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
	{
		return;
	}

	while (size > i)
	{
		action(array[i]);
		i++;
	}
}

