#include <stdio.h>

/**
 * main - prints multiplication of two arguments.
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 1.
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc < 3)
	{
		printf("Error\n");
	}
	num1 = argv[1];
	num2 = argv[2];
	mul = num1 * num2;
	printf("%d\n"mul);
	return (1);
}
