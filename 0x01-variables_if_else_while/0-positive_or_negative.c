#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0) {
		printf("\n %d is zero \n", n);
	}
	else {
		if (n > 0) printf("\n %d is positive \n", n);
		else printf("\n %d is negative \n", n);
	}
	return (0);
}
