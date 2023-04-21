#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int m = 0;
	char *str, *p = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", p, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", p, str);
					break;
				default:
					m++;
					continue;
			}
			p = ", ";
			m++;
		}
	}

	printf("\n");
	va_end(list);
}
