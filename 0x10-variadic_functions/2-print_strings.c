#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *str;
	unsigned int index;

		va_start(s, n);
		for (index = 0; index < n; index++)
		{
			str = va_arg(s, char *);
			if (str == NULL)
				printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
		}
	printf("\n");
	va_end(s);
}
