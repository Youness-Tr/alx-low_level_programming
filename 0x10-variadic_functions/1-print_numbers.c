#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * print_numbers - print number
 * @n : number param
 * @separator : sep
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ns;
	unsigned int index;
		va_start(ns, n);
			for (index = 0; index < n; index++)
			{
			printf("%d", va_arg(ns, int));
				if (index != (n - 1) && separator != NULL)
					printf("%s", separator);
			}
	printf("\n");
	va_end(ns);
}
