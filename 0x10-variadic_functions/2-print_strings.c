#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *nul;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		nul = va_arg(list, char *);
		if (!nul)
			nul = "(nil)";
		if (!separator)
			printf("%s", nul);
		else if (separator && i == 0)
			printf("%s", nul);
		else
			printf("%s%s", separator, nul);
	}

	printf("\n");

	va_end(list);
}
