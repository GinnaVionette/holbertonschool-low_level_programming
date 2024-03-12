#include "main.h"

/**
 * _isupper - checks if the argument is or isn't an uppercase alphabet
 * @x: the number to be checked
 *
 * Return: 0(Success)
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}

