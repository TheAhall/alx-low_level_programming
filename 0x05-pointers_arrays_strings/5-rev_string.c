#include "main.h"
#include <string.h>

/**
 * rev_string - Function for reverse tring
 * @s: string should be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char r;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		r = s[i];
		s[i] = s[j];
		s[j] = r;
	}
}
