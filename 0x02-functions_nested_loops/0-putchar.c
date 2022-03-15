#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * Return: On success 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
