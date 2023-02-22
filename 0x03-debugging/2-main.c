#include <stdio.h>
#include "2-largest_number.h"

int main(void)
{
	int a, b, c, largest;

	a = 10;
	b = 20;
	c = 30;
	largest = largest_number(a, b, c);
	printf("Largest of %d, %d, %d is %d\n", a, b, c, largest);

	a = -5;
	b = 0;
	c = 5;
	largest = largest_number(a, b, c);
	printf("Largest of %d, %d, %d is %d\n", a, b, c, largest);

	a = 100;
	b = 100;
	c = 100;
	largest = largest_number(a, b, c);
	printf("Largest of %d, %d, %d is %d\n", a, b, c, largest);

	return (0);
}
