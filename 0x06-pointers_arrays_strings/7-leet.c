#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @a: string should be encoded
 * Return: void
 */
char *leet(char *a)
{
	int i, j;
	char *p = "aAeEoOtTlL";
	char *o = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == p[j])
				a[i] = o[j];
		}
	}
	return (a);
}
