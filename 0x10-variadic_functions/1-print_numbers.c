#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{

		value = va_arg(arg, int);
		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%d%s", value, separator);
			else
				printf("%d\n", value);
		}
	}
	va_end(arg);
}
