#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int l;
	char a;
	long int k;
	long long int f;
	float s;

	printf("Size of a char %lu byte(s)\n", sizeof(a));
	printf("Size of a int %lu byte(s)\n", sizeof(l));
	printf("Size of a long int %lu byte(s)\n", sizeof(k));
	printf("Size of a long long int %lu byte(s)\n", sizeof(f));
	printf("Size of a float %lu byte(s)\n", sizeof(s));

	return (0);
}
