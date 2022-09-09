#include <stdio.h>

/**
 * main - function return size of variable
 *
 * Return: return 0 as sucess and 1 for failure
 */

int main(void)
{
	printf("size of char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of long int: %zu byte(s)\n", sizeof(long int));
	printf("size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of float: %zu byte(s)\n" sizeof(float));
	return (0);
}
