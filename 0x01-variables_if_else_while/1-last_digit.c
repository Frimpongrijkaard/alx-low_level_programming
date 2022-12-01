#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main there */
/**
 * main-keep different value time
 *
 * Return:0
 */
int main(void)
{
	int n;
	int ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes ther */
	ls = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5", n, ls);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0", n, ls);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, ls);
	printf("\n");
	return (0);
}
