#include <stdio.h>
#include <stdlib.h>

/**
 * main - entery point
 * @argc: number of arg
 * @argv: vertor
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		for (i = 0; i < argc; i++)
		{
			if (i == argc - 1)
			{
				j = atoi(argv[i]) * atoi(argv[i - 1]);
				printf("%d\n", j);
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
