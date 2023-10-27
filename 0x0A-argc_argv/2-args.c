#include <stdio.h>

/**
 * main - entery point
 * @argc: number of arg
 * @argv: vertor
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf ("%s\n", argv[i]);
	return (0);
}
