#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @forma list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	forma_dt types[] = {
		{ "c", print_char },
		{ "i", print_int },
		{ "f", print_float },
		{ "s", print_charptr }
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *types[j].identifier)
			{
				types[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
/**
  * print_char - function that prints a character of char type
  * @separator: separator of the character
  * @args: list of variadic arguments
  * Return: void
  */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_charptr - function that prints the content of pointer to char type
  * @separator: separator of the character
  * @args: list of variadic arguments
  * Return: void
  */
void print_charptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}

/**
  * print_int - function that prints a character of integer type
  * @separator: separator of the character
  * @args: list of variadic arguments
  * Return: void
  */
void print_int(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
  * print_float - function that prints a character of float type
  * @separator: separator of the character
  * @args: list of variadic arguments
  * Return: void
  */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}
