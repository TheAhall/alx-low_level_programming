#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer of pointer
 * @to: pointer to
 * Return: Always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
