#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *event, *tempNeedle;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			event = haystack;
			tempNeedle = needle;
			while (*tempNeedle)
			{
				if (*haystack++ != *tempNeedle++)
				{
					haystack = event;
					break;
				}
			}
			if (event != haystack)
				return (event);
		}
		haystack++;
	}
	return (0);
}
