#include <stdlib.h>
#include <time.h>
#include <stdio.h>
./betty-doc.pl file

./betty-doc.pl -h
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0){
	    printf("%d is positive", n);
	}
	else if(n == 0){
	    printf("%d is zero", n);
	}
	else if(n < 0){
	    printf("%d is negative", n);
	}
	return (0);
}
