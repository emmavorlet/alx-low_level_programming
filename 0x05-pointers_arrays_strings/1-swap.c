#include "main.h"

/**
 * swap_int - this function helps to swap the value of two int
 * @a: the value of b is given to a
 * @b: the value of a is given to b
 * Return: @ void
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
