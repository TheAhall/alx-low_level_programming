#include "main.h"
#include <ctype.h>

/**
 * rot13 - function that encodes a string using rot13.
 * @a: string should be encded
 * Return: void
 */
char *rot13(char *a)
{
	int i, j;
	char *p = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *q = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *b = a;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == p[j])
			{
				a[i] = q[j];
				break;
			}
		}
	}
	return (b);
}
