#include "main.h"
/**
 * positive_or_negative - start point
 * @i: should be checked nigative or positive
 * Return: 0
 */
void positive_or_negative(int i)
{

	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		if (i > 0)
			printf("%d is positive\n", i);
		else
			printf("%d is negative\n", i);
	}
}
