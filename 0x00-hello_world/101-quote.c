#include <unistd.h>
/**
 * main - Displaying sizeof data types.
(*
 * Return: 0 on success
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, msg, 58);

	return (0);
}

