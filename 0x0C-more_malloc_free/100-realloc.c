#include "main.h"
#include<stdlib.h>

/**
  * _realloc - func
  * @ptr: func
  * @old_size: size
  * @new_size: size
  * Return: void
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < old_size && i < new_size; i++)
		{
			*((char *)p + i) = *((char *)ptr + i);
		}

		free(ptr);
	}

	return (p);
}
