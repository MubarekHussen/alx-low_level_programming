#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	/* your code goes there */
	if (x > 5)
	{
		printf("\n Last Digit of %d is %d and is greater than 5 ", n, x);
	}
	if (x == 0)
	{
		printf("\n Last Digit of %d is %d and is 0 ", n, x);
	}
	if (x < 6 && x != 0)
	{
		printf("Last Digit of %d is %d and is less than 6 and not 0 ", n, x);
	}
	return (0);
}
