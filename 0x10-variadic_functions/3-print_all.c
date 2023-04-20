#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - print all args
  * @format: const char * const
  * Return: void
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *a;
	unsigned int i = 0, j, c = 0;
	const char args[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (args[j])
		{
			if (format[i] == args[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), c = 1;
				break;
			case 's':
				a = va_arg(ap, char *), c = 1;
				if (!a)
				{
					printf("(nil)");
					break;
				}
				printf("%s", a);
				break;
		} i++;
	} printf("\n"), va_end(ap);
}
