#include "variadic_functions.h"
#include<stdarg.h>

 /**
 * sum_them_all - sums all of passed arguments.
 * @n: number of passed arguments.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, x;
	unsigned int i;

	va_list lst;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(lst, int);
		sum += x;
	}
	va_end(lst);
	return (sum);
}
