#include <stdio.h>
#include <stdlib.h>

/**
 * main - write a script that prints all single digit number of base 10
 * Return: 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d" num);
		num++;
	}
	putchar('\n');
	return (0);
}
