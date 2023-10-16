#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, sum, rand_num;
	char password[100];

	srand(time(NULL)); 
	sum = 0;
	for (i = 0; sum < 2772; i++)
	{
		rand_num = rand() % 62;
		if (rand_num < 26)
			password[i] = 'a' + rand_num;
		else if (rand_num < 52)
			password[i] = 'A' + (rand_num - 26);
		else 
			password[i] = '0' + (rand_num - 52);
		sum += password[i];
	}
	password[i] = '\0';
	printf("%s\n", password); 
	return (0);
}
