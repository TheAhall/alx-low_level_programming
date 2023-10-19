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
	char *p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *q = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char *k = "abcdefghijklmnopqrstuvwxyz";
	char *l = "nopqrstuvwxyzabcdefghijklm";
	char *b = a;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (a[i] == p[j])
			{
				a[i] = q[j];
			}
			if (a[i] == k[j])
			{
				a[i] = l[j];
			}
		}
	}
	return (b);
}
