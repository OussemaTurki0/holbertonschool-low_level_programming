#include "main.h"
#include <string.h> // Include the necessary header file for memset

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;

if (nmemb == 0 || size == 0)
return NULL;

p = malloc(nmemb * size);
if (p == NULL)
return NULL;

memset(p, 0, nmemb * size);

return p;
}
