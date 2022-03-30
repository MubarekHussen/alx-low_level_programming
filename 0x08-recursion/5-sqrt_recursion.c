#include "main.h"
/**
 * sqrt - calculate sqrt.
 *@n: input nummber.
 *@j: start from 0.
 *
 *Return: square root.
 */

int sqrt(int n, int j)
{
	if (j < n/2)
	{
		if (j * j == n)
		{
			return (j);
		}
		return (sqrt(n,j + 1));
	}
	return (-1);
}

/**
 * _sqrt_recursion - square root.
 *@n: input nummber.
 *
 *Return: power.
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n,0));
}
