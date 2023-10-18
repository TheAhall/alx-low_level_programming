#include "main.h"
#include <ctype.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @a: string should be capitalized
 * Return: void
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0 || a[i - 1] == ' ')
			a[i] = toupper(a[i]);
	}
	return (a);
}
