#include "main.h"

/**
<<<<<<< HEAD
  * _strcpy - function to copy string
  * @dest: string empty
  * @src: string full to be copied
  * Return: dest string
  *
  */

char *_strcpy(char *dest, char *src)
{
	int i, count;

	for (i = 0; src[i] != '\0'; i++)
		;

	for (count = 0; count < i; count++)
	{
		dest[count] = src[count];
	}
=======
 * *_strcpy -  copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');
>>>>>>> refs/remotes/origin/main

	return (dest);
}
