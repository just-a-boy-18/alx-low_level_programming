#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
