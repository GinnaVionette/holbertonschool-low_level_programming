#include "main.h"
#include <stdio.h>

/**
 * main - prints name
 * @argc: int
 * @argv: char*
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	argc++;
	printf("%s\n", argv[0]);

	return (0);
}
