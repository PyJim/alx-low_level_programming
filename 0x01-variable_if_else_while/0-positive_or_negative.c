#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Assign a random number to an integer (int) and everytime
 * it should output an accurate value of its type.
 * Return: It should always return a value of 0, if suceessful.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	return (0);
}
