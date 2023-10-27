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
	int cent = atoi(argv[1]), coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cent < 0)
	{
		printf("0\m");
		return (0);
	}
	for (i = 0; i < 5 && cent >= 0; i++)
	{
		while (cent >= coin[i])
		{
			cent -= coin[i];
			j++;
		}
	}
	printf("%d\n", j);
	return (0);
}
