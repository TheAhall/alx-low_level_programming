#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
