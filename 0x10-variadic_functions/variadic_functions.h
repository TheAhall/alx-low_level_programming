#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct types - Struct 
 * @identifier: The conversion specifier
 * @f: function pointer
 */
typedef struct types
{
	char *identifier;
	void (*f)(char *separator, va_list args);
} forma_dt;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_charptr(char *separator, va_list args);
void print_int(char *separator, va_list args);
void print_float(char *separator, va_list args);

#endif
