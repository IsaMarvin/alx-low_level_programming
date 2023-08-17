#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: Just Nothing.
 */

void print_all(const char * const format, ...)
{
	int indx, findic;
	char *str;
	va_list myapx;

	indx = 0;

	va_start(myapx, format);
	while (format != NULL && format[indx] != '\0')
	{
		switch (format[indx])
		{
			case 'i':
				printf("%i", va_arg(myapx, int));
				findic = 0;
				break;
			case 's':
				str = va_arg(myapx, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				findic = 0;
				break;
			case 'c':
				printf("%c", va_arg(myapx, int));
				findic = 0;
				break;
			case 'f':
				printf("%f", va_arg(myapx, double));
				findic = 0;
				break;
			default:
				findic = 1;
				break;
		}
		if (findic == 0 && format[indx + 1] != '\0')
			printf(", ");
		indx++;
	}
	printf("\n");
	va_end(myapx);
}
