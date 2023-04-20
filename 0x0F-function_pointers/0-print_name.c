#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_name - print my name
  * @name: char*
  * @f: char*
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
	{
		return;
	}
	f(name);
}
