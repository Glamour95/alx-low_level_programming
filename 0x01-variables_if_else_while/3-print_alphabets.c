#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: Always: 0 (Success)
*/
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'd';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z')
		{
			putchar(d);
			d++;
		}
	return (0);
}
