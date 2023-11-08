#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function add
  * @a: variable 1
  * @b: variable 2
  * Return: value of the sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function difference
  * @a: variable 1
  * @b: variable 2
  * Return: value of difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function product
  * @a: variable 1
  * @b: varibale 2
  * Return: value of multiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function result of the division
  * @a: variable 1
  * @b: variable 2
  * Return: result of the division of a by b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function remainder of the division
  * @a: variable 1
  * @b: variable 2
  * Return: the remainder of the division of a by b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
