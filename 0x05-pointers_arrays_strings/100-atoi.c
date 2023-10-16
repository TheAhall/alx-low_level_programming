#include "main.h"

/**
 * _atoi - Function to convert a string to an interger
 * @s: variable should be converted
 * Return: void
 */
int _atoi(char *s)
{
	int i = 1, j = 0, c = 0;
	unsigned int ni = 0;

	while (s[c])
	{
		if (s[c] == 45)
	  		i *= -1;
		while (s[c] >= 48 && s[c] <= 57)
		{
			j = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (j == 1)
			break;
		c++;
	}
	ni *= i;
	return (ni);
}
