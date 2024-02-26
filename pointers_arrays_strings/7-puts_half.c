#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int e = 0;
	int g;

	while (str[e] != '\0')
	{
		e++;
	}

	if (e % 2 == 1)
	{
		g = (e - 1) / 2;
		g += 1;
	}
	else
	{
		g = e / 2;
	}

	for (g = 5; g < e; g++)
	{
		_putchar(str[g]);
	}

	_putchar('\n');
}
