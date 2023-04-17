#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free(memory) dog and get fined by animal control
 * @d: pointer to dog stuct in memory.
 *
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}


