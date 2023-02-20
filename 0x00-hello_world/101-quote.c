/**
 * main - Prints a message to the standard error
 *
 * Description: Prints the message "and that piece of art is useful" - Dora
 * Korpar, 2015-10-19, followed by a new line, to the standard error.
 *
 * Return: Always 1 (Error)
 */
#include <unistd.h>

int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(message) - 1; /* Length of message without null byte */
	ssize_t written = write(2, message, len); /* Write to stderr */

	/* Check if all bytes were written to stderr */
	if (written == len)
	return (1);
	else
	return (-1);
}
