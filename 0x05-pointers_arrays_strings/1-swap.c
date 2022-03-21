#include "main.h"
/**
 * swap_int - swaps two values.
 *
 *@a: first value need to be swaped.
 *@b: second value need to be swaped.
 */
void swap_int(int *a, int *b)
{
	int *x = 0;

	x = &a;
	a = &b;
	b = &x;
}
