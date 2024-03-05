#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: int
 * @argv: char*
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int b = 0;

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}

	return (0);
}
