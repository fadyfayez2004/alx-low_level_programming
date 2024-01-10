<<<<<<< HEAD
#include "main.h"

/**
  * _atoi - print number in string
  * Return: result
  * @s: string of a number
  *
  *
  */

int _atoi(char *s)
{
	int i, dir = 1, result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		/*to make a check for the sign*/
		if (s[i] == '-')
		{
			dir = -dir;
		}
		/*make a check if it is a number*/
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else if (s[i] == '+' || s[i] == '-' || s[i] == ' ')
		{
			continue;
		}
		else
		{
			break;
		}
	}

	result *= dir;
	return (result);
=======
/**
* _atoi - changes a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/
int _atoi(char *s)
{
int i = 1;
unsigned int num = 0;
do {
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
num = num * 10 + (*s - '0');
else if (num > 0)
break;
} while (*s++);
return (num *i);
>>>>>>> refs/remotes/origin/main
}
