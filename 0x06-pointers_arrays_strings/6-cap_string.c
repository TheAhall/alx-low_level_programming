#include "main.h"
#include <ctype.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @a: string should be capitalized
 * Return: void
 */
char *cap_string(char *a)
{
	int i, j;
	char p[13] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
			a[i] = toupper(a[i]);
		for (j = 0; j < 13; j++)
		{
			if (a[i] == p[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
					a[i + 1] = toupper(a[i + 1]);
			}
		}
	}
	return (a);
}
