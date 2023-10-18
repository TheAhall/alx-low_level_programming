#include "main.h"
#include <ctype.h>

/**
 * string_toupper - function that changes a string to uppercase.
 * @a: string should be changed to uppedcase
 * Return: char
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = toupper(a[i]);
	}
	return (a);
}
