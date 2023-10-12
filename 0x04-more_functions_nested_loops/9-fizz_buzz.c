#include <stdio.h>

/**
 * main - start point
 *
 * Return: always 0
 */
int main(void)
{
	int i, j, n;

	for (i = 1; i <= 100; i++)
	{
		j = i % 3;
		n = i % 5;

		if (j != 0  && n != 0)
			printf("%d", i);
		else
		{
			if (j == n)
				printf("FizzBuzz");
			else
			{
				if (j == 0)
					printf("Fizz");
				if (n == 0)
					printf("Buzz");
			}
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
