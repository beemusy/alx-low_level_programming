#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* File: Positive or negative
 * Auth: Blessings Moyo
 * */

/* Main: Positive or negative output
 * Return (0)
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0) 
		printf("%d\n is negative", n);
	else if (n == 0)
		printf( "%d\n is zero", n);
			else if (n > 0 )
				printf("%d\n is positive", n);
	
	/* your code goes there */
	return (0);
}

