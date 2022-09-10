#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * Return: Always output the value 0, when code runs successfully.
 */

int main(void)

{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
