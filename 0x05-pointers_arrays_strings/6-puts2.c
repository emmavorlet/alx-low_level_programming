#include "main.h"

/**
*  puts2 - this founction print every other character of string
*
* (Divisible by two)
*
* @str: pointer, the string to print
* Return: void
*/
void puts2(char *str)
{
	int i = 0;

	while (str[1] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);

		}

		i++;

	}
}
