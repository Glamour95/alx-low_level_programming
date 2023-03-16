#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: Size of memory block to be allocated
 *
 * Return: Pointer to the allocated memory
 * If malloc fails, the function causes normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;  /* Declare a void pointer p */
	p = malloc(b); /* Allocate memory of size b and assign it to p */
	if (p == NULL) /* Check if malloc failed */
		exit(98); /* If malloc failed, exit with status value 98 */
	return (p); /* Otherwise, return the pointer to the allocated memory */
}
