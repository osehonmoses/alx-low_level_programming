#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	int result = 1;

	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);

		result = result * x;
	}

	printf("%d\n", result);

	return (0);
}
