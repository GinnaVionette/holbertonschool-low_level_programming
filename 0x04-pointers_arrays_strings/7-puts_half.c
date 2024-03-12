#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int p, l, s;

	p = 0;

	while (str[p] != '\0')
	{
		p++;
	}

	if (p % 2 == 0)
	{
		for (s = p / 2; str[s] != '\0'; s++)
		{
			_putchar(str[s]);
		
	}
	
		else if (p % 2)

			for (l = (p - 1) / 2; l < p - 1; l++)
			{
				_putchar(str[l + 1]);
			}
	}
	
	_putchar('\n');
}
