#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc.
 * Description: ....
 * @b: unsigned int memory size to allocate
 * Return: void space
 * NULL : null
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
