#include "main.h"

/**
  * _isalpha - checks if letter is alpha
  *@c: the character to be checked
  *Return: 1 if c is alpha, 0 ohterwise
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
