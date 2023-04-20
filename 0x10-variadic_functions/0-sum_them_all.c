#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * sum_them_all - sum all args
  * @n: const unsigned int
  * Return: int
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int s = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		s += va_arg(ap, int);
	}
	va_end(ap);
	return (s);
}
