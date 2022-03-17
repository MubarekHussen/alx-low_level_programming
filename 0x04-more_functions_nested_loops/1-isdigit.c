#include "main.h"
/**
 * _isupper - cheks uppercase letters!.
 *
 *@c: character.
 *
 * Return: 0 on success
 */
int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
