#include "main.h"

/**
  * leet - Encodes a string into 1337
  * @q: The string to encode
  *
  * Return: The encoded string
  */
char *leet(char *q)
{
	int a = 0, b = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (q[a])
	{
		b = 0;

		while (b < l)
		{
			if (q[a] == r[b] || q[a] - 32 == r[b])
			{
				q[a] = n[b];
			}

			b++;
		}

		a++;
	}

	return (q);
}
