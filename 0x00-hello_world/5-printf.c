#include <stdio.h>
/**
 * main -Print a line of code using printf
 *
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	print("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	print("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(b));
	print("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	print("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	print("Size of a float int: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
