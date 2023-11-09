#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *value;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(arg, char *);
		if (value != NULL)
			printf("%s", value);
		else
			printf("(nil)");
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
