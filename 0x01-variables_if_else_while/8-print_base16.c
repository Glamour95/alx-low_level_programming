#include <stdio.h>
/**
 *
 * main - A program that prints all the numbers of base 16 in lowercase, followed by a new line. 
 *
 * Return = 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 10; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
