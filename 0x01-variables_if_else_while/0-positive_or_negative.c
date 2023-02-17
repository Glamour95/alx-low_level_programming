#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*Positive anything is better than negative nothing*/

/*0-positive_or_negative.c*/
/**
 * main - print whether the number stored in the variable is positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else 
		printf("%d is negative\n", n);
	return (0);
}
