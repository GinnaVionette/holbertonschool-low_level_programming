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

	printf("Size of a char %lu\n", sizeof(a));
	printf("Size of a int %lu\n", sizeof(l));
	printf("Size of a long int %lu\n", sizeof(k));
	printf("Size of a long long int %lu\n", sizeof(f));
	printf("Size of a float %lu\n", sizeof(s));

	return (0);
}
