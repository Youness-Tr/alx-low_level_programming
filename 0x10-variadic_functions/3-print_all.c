#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int c;
	int flag;
	char *str;
	va_list a_list;

	va_start(a_list, format);
	c = 0;
	while (format != NULL && format[c] != '\0')
	{
		switch (format[c])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				flag = 0;
				break;
			case 'c':
				printf("%i", va_arg(a_list, int));
				flag = 0;
				break;
			case 'c':
				printf("%f", va_arg(a_list, double));
				flag = 0;
				break;
			case 'c':
				str = va_arg(a_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[c + 1] != '\0' && flag == 0)
			printf(", ");
		c++;
	}
	printf("\n");
	va_end(a_list);
}
