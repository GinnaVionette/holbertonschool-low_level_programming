#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates (combines) two strings together
 *@dest: string with concatenation
 *@src: string to be concatenated
 *Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int lengthD, lengthS;

	lengthD = 0;
	lengthS = 0;

	while (*(dest + lengthD) != '\0')
		lengthD++;

	while (*(src + lengthS) != '\0' && lengthD < 97)
	{
		*(dest + lengthD) = *(src + lengthS);
		lengthD++;
		lengthS++;
	}
	*(dest + lengthD) = '\0';
			return (dest);
}

