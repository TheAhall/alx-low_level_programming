#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entery point
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, b;
	int (*address)(int, char **) = main;
	unsigned char a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		a = *(unsigned char *)address;
		printf("%.2x", a);

		if (i == b - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
