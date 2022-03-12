#include <stdio.h>
/**
 * main - Displaying sizeof data types.
(*
 * Return: 0 on success
 */
int main(void) 
{
	printf("Size of a char:%dbyte(s)\n",sizeof(char));
	printf("Size of an int:%dbyte(s)\n",sizeof(int));
	printf("Size of long int:%dbyte(s)\n",sizeof(long int));
	printf("Size of a long long int:%dbyte(s)\n",sizeof(long long int));
	printf("Size of a float:%dbyte(s)\n",sizeof(float));

	return (0);
}
