#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - print strings and new line
  * @separator: const char*
  * @n: const unsigned int
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *a;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(ap, char *);
		if (a != NULL)
		{
			printf("%s", a);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
