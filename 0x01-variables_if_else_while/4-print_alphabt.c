#include <stdio.h>

/**
 * main - function in put alphabet
 * Return: 0 for success
 */

int main(void)
{

	char letter = 'a';

	while (letter <= 'z')


	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		letter++;

	}


	putchar('\n');

	return (0);


}
