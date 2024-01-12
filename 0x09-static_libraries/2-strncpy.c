#include "main.h"

/**
  * _strncpy - function for replacing
  * @dest: the raw string
  * @src: the string
  * @n: the number of letters to replace
  * Return: the string
  *
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
