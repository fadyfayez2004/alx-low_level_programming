#include "main.h"

/**
  * print_alphabet_x10 - print the alphabt 10
  * no Return
  */
void print_alphabet_x10(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		num++;
	}
}
